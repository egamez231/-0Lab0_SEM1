
#include <stdio.h>
int main ()
{
int mark;
printf("Please enter your mark:");
scanf("%d",&mark);

printf("\nGred:");
if (mark>=80 && mark<=100){
    printf("A");
    printf("\nStatus Is Pass");
} else if (mark>=60 && mark<=79){
    printf("B");
    printf("\nStatus Is Pass");
} else if (mark>=40 && mark<=59){
    printf("C");
    printf("\nStatus Is Pass");
} else {
    printf("F");
    printf("\nStatus Is Fail");
}

return 0;
}
