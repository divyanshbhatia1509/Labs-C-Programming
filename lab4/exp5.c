/*5.	WAP using ternary operator, the user should input the length and breadth of a rectangle, one has to find out which rectangle has the highest perimeter. 
The minimum number of rectangles should be three.*/

#include <stdio.h>

int main() {
    int length1, bredth1, length2, bredth2, length3, bredth3;
    int peri1, peri2, peri3, max;

    // Input for 1st rectangle
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%d", &length1);
scanf("%d", &bredth1);

    // Input for 2nd rectangle
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%d", &length2);
    scanf("%d",&bredth2);

    // Input for 3rd rectangle


    
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%d", &length3);
    scanf("%d",&bredth3);

    peri1 = 2 * (length1 + bredth1);
    peri2 = 2 * (length2 + bredth2);
    peri3 = 2 * (length3 + bredth3);
  max = (peri1 > peri2) ? ((peri1 > peri3) ? peri1 : peri3) : ((peri2 > peri3) ? peri2 : peri3);

    printf("\nPerimeter of Rectangle 1 = %d", peri1);
    printf("\nPerimeter of Rectangle 2 = %d", peri2);
    printf("\nPerimeter of Rectangle 3 = %d", peri3);

    printf("\nThe highest perimeter is: %d\n", max);

    return 0;
}
