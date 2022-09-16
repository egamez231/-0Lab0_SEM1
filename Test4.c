#include <stdio.h>
int main ( )
{
char grade;
int points;
printf("\nEnter a grade (A – F): ");
scanf("%c", &grade);
switch (grade)
{
case 'A':
points = 4;
printf("\nThe grade is A.");
break;
case 'B':
points = 3;
printf("\nThe grade is B.");
break;
case 'C':
points = 2;
printf("\nThe grade is C.");
break;
case 'D':
points = 1;
printf("\nThe grade is D.");
break;
case 'F':
points = 0;
printf("\nThe grade is F.");
break;
printf("\nThe grade is invalid.");
}
if (points > 0)
printf ("\nPassed, points earned = %d\n",points);
else printf ("\nFailed, no points earned\n");
return 0;
}
