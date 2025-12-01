/*Q2. Write a C program that: 1. Dynamically allocates memory for n integers using malloc(). 2.
Takes array input from the user. 3. Counts and displays the frequency of each unique element in
the array.
Input Example: Enter number of elements: 6 Enter elements: 2 3 2 5 3 3
Output Example: Element 2 appears 2 times Element 3 appears 3 times Element 5 appears 1 time
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    // Step 1: Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    int *arr = (int *)malloc(n * sizeof(int));
    

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Read array input
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Array to track visited elements
    int *visited = (int *)calloc(n, sizeof(int));

    // Step 3: Count frequency
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) 
            continue;  // Skip already counted elements

        int count = 1;

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1; 
                count++;
            }
        }

        printf("Element %d appears %d time%s\n", arr[i], count, (count > 1 ? "s" : ""));
    }

    // Free memory
    free(arr);
    free(visited);

    return 0;
}
