#include <stdio.h>
// what is the diference between const and #define ???? In this case , does it matter what I use? => const doble cupToOz || #define CUPTOOZ


int main()
{
   
   const double cupToOz = 8;
   double userOz;
 
   
   printf("How many oz do you want?\n");
   scanf("%lf",&userOz);
   
    double userCups = (userOz/cupToOz);
     
   printf("This is/are %lf cup/s.\n",userCups);


    return 0;
}
