#include <stdio.h>
int main ()
{
int pH;

printf("Please enter pH Value:");
scanf("%d",&pH);

printf("\npH Status:");
if (pH > 7){
  if (pH < 12)
    printf("Neutral");
  else
    printf("Very Alkaline");

}else
  if(pH == 7)
   printf("neutral");
  else if (pH >  2)
   printf("Acidic");
  else
    printf("Very Acidic");

return 0;
}


