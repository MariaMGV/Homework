
#include <stdio.h>
#define YEAR 365.25 // the days in 1 year on Earth

int main()
{
  double userNumber = 0;
    
  printf("Enter days, please!\n"); 
  scanf("%lf",&userNumber); //TODO: why %lf works, and why %f doesn't
 
  //const double daysYear = 365.25;  
  double years = userNumber / YEAR;
  double yearsJup = (years / 12);

  if(years > 1)
  {
      printf("This are %.2f years on Earth and", years);
  }
  else if (years == 1)
  {
   printf("This is 1 year on Earth and"); 
  }
  else 
  {
      printf("This is less than 1 year on Earth - exactly %.2f from the Earth's year and", years);
  }

  if (yearsJup > 1) 
  {
    printf(" %.2f years on Jupiter.\n",yearsJup);
  } 
  else if (yearsJup == 1)
  {
    printf(" 1 year on Jupiter.\n",yearsJup);
  }
   else
  {
    printf(" less on Jupiter - exactly %2f from Jupiter's year.\n",yearsJup);
  }

return 0;

}