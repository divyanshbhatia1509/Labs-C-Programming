/*Q3. Write a C program that: 1. Dynamically allocates memory for n integers using malloc(). 2.
Accepts elements from the user. 3. Separates all even and odd elements into two new dynamically
allocated arrays. 4. Prints the even and odd arrays separately.
Input Example: Enter number of elements: 6 Enter elements: 1 2 3 4 5 6
Output Example: Even elements: 2 4 6 Odd elements: 1 3 5*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    // Step 1: Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for main array
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Step 2: Read array elements
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    int evenCount = 0, oddCount = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Step 3: Allocate memory for even and odd arrays
    int *evenArr = (int *)malloc(evenCount * sizeof(int));
    int *oddArr = (int *)malloc(oddCount * sizeof(int));

    if (evenArr == NULL || oddArr == NULL) {
        printf("Memory allocation failed!\n");
        free(arr);
        return 1;
    }

    // Fill even and odd arrays
    int e = 0, o = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            evenArr[e++] = arr[i];
        else
            oddArr[o++] = arr[i];
    }

    // Step 4: Print results
    printf("Even elements: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd elements: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    // Free memory
    free(arr);
    free(evenArr);
    free(oddArr);

    return 0;
}
