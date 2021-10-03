#include<stdio.h>
// #define GMOON 0.17 // moon's gravity is 17 % from Earth's gravity 


int main()
{
	
    float userKg = 0; 
    const float gMoon = 0.17;  
    float userKgMoon = 0;
    

    printf("Enter your weight, please!\n");
    scanf("%f",&userKg);

    userKgMoon = (userKg * gMoon);
    printf ("Your weight on the moon will be %.2f kg. Call to Jeff or Elon for next space flight :) !\n ",userKgMoon);

    return 0;

}
