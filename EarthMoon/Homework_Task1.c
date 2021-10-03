#include<stdio.h>
//#define G_EARTH 9.80



int main()
{
	////
    float gEarth = 9.80;
    float gMoon = 0;
    gMoon = (17 * gEarth) / 100;
    float userKg = 0;
    float userKgMoon = 0;
    

    printf("Enter your weight, please!\n");
    scanf("%f",&userKg);

    userKgMoon = (userKg * gMoon);
    printf ("Your weight on the moon will be %f kg :). Call to Jeff or Elon for next space flight!\n ",userKgMoon);

    return 0;

}
