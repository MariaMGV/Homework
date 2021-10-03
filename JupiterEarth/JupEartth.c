
#include <stdio.h>
#define YEAR 365.25 // the days in 1 year on Earth

int main()
{
  double userNumber = 0;
    
  printf("enter days\n"); //TODO: ask our instructor why %lf works, and why %f doesn't
  scanf("%lf", &userNumber);
 
  //double daysYear = 365.25;  
  double years = userNumber/YEAR;
  double yearsJup = years/12;

  if(years > 1)
  {
      printf("This are %.2f years on Earth and %.2f years on Jupiter.\n",years,yearsJup);
  }
  else if (years == 1)
  {
   printf("This is %.2f year on Earth and less than 1 year - exactly %2f from the Jupiter's year.",years,yearsJup);
  }
  else 
  {
      printf("This is less than 1 year on Earth - exactly %.2f from the Earth's year and even less on Jupiter - exactly %2f from Jupiter's year.",years,yearsJup);
  }

return 0;

}