#include <stdio.h>

int main()
{
   
   int cupToOz;
   cupToOz = 8;
   int userOz;
 
   
   printf("How many oz do you want?\n");
   scanf("%d",&userOz);
   
     int userCups = (userOz/cupToOz);
     
   printf("This is/are %d cup/s.\n",userCups);


    return 0;
}
