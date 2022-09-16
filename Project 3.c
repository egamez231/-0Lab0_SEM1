#include <stdio.h>
int main ()
{
// variables declaration
float radius,area,parimeter;
// to display messages to user
printf ("\nProgram to calculate Area and Parimeter of Circle");
printf ("\n\nPlease enter the value of radius: ");
scanf("%f",&radius);
double pi = 3.141594;
area = pi*(pow(radius,2));
parimeter = 2*pi*radius; //formula to calculate parimeter is written here
printf ("\nArea = %.3f",area);
printf ("\n\nParimeter = %.3f",parimeter);
 //display answer for area
return 0;
} //end of main
