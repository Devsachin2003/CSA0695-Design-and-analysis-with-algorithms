#include <stdio.h>

#define MAX_CONTAINERS 100

int loadContainers(int weights[], int n, int capacity) {
    int containers[MAX_CONTAINERS] = {0};
    int numContainers = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < numContainers; j++) {
            if (containers[j] >= weights[i]) {
                containers[j] -= weights[i];
                break;
            }
        }
        if (j == numContainers) {
            containers[numContainers] = capacity - weights[i];
            numContainers++;
        }
    }

    return numContainers;
}

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int weights[MAX_CONTAINERS];
    printf("Enter the weights of the items:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weights[i]);
    }

    int capacity;
    printf("Enter the container capacity: ");
    scanf("%d", &capacity);

    int numContainers = loadContainers(weights, n, capacity);

    printf("Number of containers used: %d\n", numContainers);

    return 0;
}
