/*3.	WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.*/
/*method used is slope */
#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;


    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d",&x1);
    scanf("%d",&y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d",&x2);
    scanf("%d",&y2);

    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%d",&x3);
    scanf("%d",&y3);

    // Check collinearity using slope method 
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The points are collinear.");
    } 
    else 
    {
        printf("The points are not collinear.\n");
    }

    return 0;
}
