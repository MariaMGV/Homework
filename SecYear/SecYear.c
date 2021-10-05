
#include<stdio.h>

int main()
{

const float fAstroYear = 365.25; 
const int iLeapYear = 366, iOneSecMin = 60, iOneMinHour = 60, iHourInDay = 24, iYear = 365;
int iAstro_Year_Hours = 0, iHoursToMin = 0, iLeap_Year_Hours = 0, iYear_Hours = 0, iMinsToSec = 0;


// Astronomical year
iAstro_Year_Hours = (fAstroYear * iHourInDay);
iHoursToMin = (iAstro_Year_Hours * iOneMinHour);
iMinsToSec = (iHoursToMin * iOneSecMin);
printf("There are %d seconds in one astronomical year.\n",iMinsToSec);

//Leap Year

iLeap_Year_Hours = (iLeapYear * iHourInDay);
iHoursToMin = (iLeap_Year_Hours * iOneMinHour);
iMinsToSec = (iHoursToMin * iOneSecMin);
printf("There are %d seconds in one leap year.\n",iMinsToSec);

//Ordinary year
iYear_Hours = (iYear * iHourInDay);
iHoursToMin = (iYear_Hours * iOneMinHour);
iMinsToSec = (iHoursToMin * iOneSecMin);
printf("There are %d seconds in one ordinary year.\n",iMinsToSec);

    return 0;
}