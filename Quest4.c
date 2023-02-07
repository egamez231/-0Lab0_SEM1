#include <stdio.h>
int main ()
{
float BMI,weight,hight,height;
printf("Please enter your weight (Kg):");
scanf("%f",&weight);
printf("Please enter your height (Cm):");
scanf("%f",&hight);

height = hight/100; //Convert to meter

BMI = (weight)/(pow(height,2)); // BMI Fomular

printf("\nBMI:%2f",BMI);
if (BMI<=20.9){
    printf("\nUnderweight");
} else if (BMI>=21.0 && BMI<=35.9){
    printf("\nNormal");
} else if ( BMI>=36.0 && BMI<=45.9){
    printf("\nOverweight");
} else {
    printf("\nObese");
}

return 0;
}
