/*Q1. Write a C program that: 1. Dynamically allocates an array of size n using malloc(). 2. Takes n
integer inputs from the user. 3. Inserts a new element at a given position pos (1-based index). 4.
Shifts the existing elements to the right. 5. Displays the updated array.
Input Example: Enter number of elements: 5 Enter elements: 10 20 30 40 50 Enter element to
insert: 25 Enter position to insert: 3
Output Example: Array after insertion: 10 20 25 30 40 50*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, elem, pos;

    // Step 1: Read size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc()
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Step 2: Take n inputs
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Element to insert
    printf("Enter element to insert: ");
    scanf("%d", &elem);

    // Position to insert (1-based index)
    printf("Enter position to insert: ");
    scanf("%d", &pos);

    // Validate position
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        free(arr);
        return 1;
    }

    // Step 4: Reallocate memory to increase size by 1
    arr = (int *)realloc(arr, (n + 1) * sizeof(int));

    // Step 5: Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos - 1] = elem;
    n++;

    // Step 6: Print result
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free memory
    free(arr);

    return 0;
}
