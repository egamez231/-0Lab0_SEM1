#include <stdio.h>
int main ()
{
// variables declaration
float celsius,fahrenheit;
// to display messages to user
printf ("\nProgram to convert Celsius to Fernthite");
printf ("\n\nPlease enter the value of Celsius: ");
scanf("%f",&celsius);
fahrenheit = (9.0/5.0 * celsius)+32; //formula to calculate area is written here
printf ("\nFahrenheit = %.f",fahrenheit);
 //display answer for area
return 0;
} //end of main
