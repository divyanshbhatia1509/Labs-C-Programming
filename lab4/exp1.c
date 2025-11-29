/*Write a program to check if the triangle is valid or not.if the validity is established do check wheather the triange 
is isoceles,equilateral,right angles or scalene.take side of traingle as input from user.  */


   #include<stdio.h>
    int main () {
    float side1,side2,side3;
    printf("enter side 1:- ");
    scanf("%f",&side1);
    printf("enter side 2 :- ");
    scanf("%f",&side2);
    printf("enter side 3 :- ");
    scanf("%f",&side3);

    if (side1+side2>side3 && side2+side3>side1 && side1+side3>side2)
     {
        printf("the triangle is valid\n");
     }
 if ( side1 == side2 && side2 == side3 && side1 == side3)
 {
    printf("the triangle is equilateral\n");
}  
 else if ( side1 == side2 || side2 == side3 || side3 == side1) 
{
    printf("the triangle is isosceles\n");
}
 else  if ( side1*side1 + side2*side2 == side3*side3 || side2*side2+ side3*side3 == side1*side1 || side3*side3 + side1*side1 == side2*side2) 
 {
    printf("the triangle is right angled\n");
} 
else 
{
    printf("the triangle is scalene\n");
}
return 0;
}
  