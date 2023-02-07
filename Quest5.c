#include <stdio.h>
int main ()
{
int power, brightness;

printf("Please enter bulb power (Watts):");
scanf("%d",&power);

printf("\nLumen:");
switch (power)
{
case 15 :
    printf("\nBrightness is 125");
    break;
case 25 :
    printf("\nBrightness is 215");
    break;
case 40 :
    printf("\nBrightness is 500");
    break;
case 60 :
    printf("\nBrightness is 880");
    break;
case 75 :
    printf("\nBrightness is 1000");
    break;
case 100 :
    printf("\nBrightness is 1675");
    break;
default:
    printf("\nBrightness -1");
}

return 0;
}
