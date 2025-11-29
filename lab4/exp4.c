/*4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard 
write a program to find out what is the day on 1st January of this year.*/

#include <stdio.h>

#include <stdio.h>

int main() {
    int year, leap, days, day;

    printf("Enter year: ");
    scanf("%d", &year);


    leap = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // Total days before this year
    days = (year - 1) * 365 + leap;

    day = days % 7;


    if (day == 0)
        printf("On 01/01/%d, it was Monday\n", year);
    else if (day == 1)
        printf("On 01/01/%d, it was Tuesday\n", year);
    else if (day == 2)
        printf("On 01/01/%d, it was Wednesday\n", year);
    else if (day == 3)
        printf("On 01/01/%d, it was Thursday\n", year);
    else if (day == 4)
        printf("On 01/01/%d, it was Friday\n", year);
    else if (day == 5)
        printf("On 01/01/%d, it was Saturday\n", year);
    else
        printf("On 01/01/%d, it was Sunday\n", year);

    return 0;
}



