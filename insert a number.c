#include <stdio.h>

int main() {
    int array[100]; // Assuming a maximum of 100 elements
    int size, newNumber, position;

    // Input the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // Input the new number to be inserted
    printf("Enter the new number to be inserted: ");
    scanf("%d", &newNumber);

    // Input the position at which the new number should be inserted
    printf("Enter the position where the new number should be inserted (0-indexed): ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > size) {
        printf("Invalid position.\n");
    } else {
        // Shift elements to make space for the new number
        for (int i = size; i > position; i--) {
            array[i] = array[i - 1];
        }

        // Insert the new number
        array[position] = newNumber;

        size++; // Increase the size of the array

        // Print the updated array
        printf("Updated array after insertion:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
