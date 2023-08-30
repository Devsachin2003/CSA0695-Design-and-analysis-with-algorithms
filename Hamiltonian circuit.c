#include <stdio.h>
#include <stdbool.h>

#define V 5 // Number of vertices in the graph

void printSolution(int path[]);
bool isSafe(int v, bool graph[V][V], int path[], int pos);
bool hamiltonianUtil(bool graph[V][V], int path[], int pos);

void hamiltonianCycle(bool graph[V][V]) {
    int path[V];
    for (int i = 0; i < V; i++)
        path[i] = -1;

    path[0] = 0; // Start from vertex 0 as the initial vertex

    if (hamiltonianUtil(graph, path, 1) == false)
        printf("No Hamiltonian cycle exists.\n");
    else
        printSolution(path);
}

void printSolution(int path[]) {
    printf("Hamiltonian cycle found:\n");
    for (int i = 0; i < V; i++)
        printf("%d ", path[i]);
    printf("%d\n", path[0]); // Complete the cycle
}

bool isSafe(int v, bool graph[V][V], int path[], int pos) {
    if (graph[path[pos - 1]][v] == 0)
        return false;

    for (int i = 0; i < pos; i++)
        if (path[i] == v)
            return false;

    return true;
}

bool hamiltonianUtil(bool graph[V][V], int path[], int pos) {
    if (pos == V) {
        // Check if there's an edge from the last vertex to the first vertex
        if (graph[path[pos - 1]][path[0]] == 1)
            return true;
        else
            return false;
    }

    for (int v = 1; v < V; v++) {
        if (isSafe(v, graph, path, pos)) {
            path[pos] = v;

            if (hamiltonianUtil(graph, path, pos + 1) == true)
                return true;

            path[pos] = -1; // Backtrack
        }
    }

    return false;
}

int main() {
    bool graph[V][V] = {
        {0, 1, 0, 1, 0},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 0, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };

    hamiltonianCycle(graph);

    return 0;
}
