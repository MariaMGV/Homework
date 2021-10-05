/* Представете си, че имате фирма за отдаване на каравани и кемпери под 
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате 
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден. 
Декларирайте променливи за броя на караваните, цената на караваните, броя на 
кемперите и цената им. Направете меню, което пита клиента каравана или 
кемпер ще иска. Направете променлива, в която да се събират парите, които 
клиента дължи на компанията. Принтирайте резултата. */

#include<stdio.h>
// #define  DDSTAX 1.2  //float ddsTax = 1.2; / 1.2 is the dds tax multiplier   = > When the amount has to be calculated with VAT


int main()
{
int iCaravans = 0, iCampers = 0, iUserChoice = 0, iRentalDays = 0;
float fPriceCaravan = 0, fPriceCamper = 0, fSumCaravan = 0, fSumCamper = 0; // totalSumCar = 0, totalSumCamp = 0; => When the amount has to be calculated with VAT

iCaravans = 3;
iCampers = 3;

  printf("How many caravans do you want to book? Choose 0 for none, we have a maximum of 3 caravans:\n");
  scanf("%d", &iUserChoice);
 

  while (iUserChoice < 0 || iUserChoice > 3)
  {
    printf("Enter a number between 0 and 3\n");
    scanf("%d", &iUserChoice);
  }
  
  printf("Please, choose your rental days:\n");    
  scanf("%d", &iRentalDays); 
  fPriceCaravan = (iUserChoice * 90);
  fSumCaravan = (fPriceCaravan * iRentalDays);
  //totalSumCar = (fSumCaravan * DDSTAX); /  amount calculated with VAT
  
  printf("Your rent will cost %.2f leva. Enjoy your trip!\n", fSumCaravan);
  
  printf("How many campers do you want to book? Choose 0 for none, we have a maximum of 3 campers:\n");
  scanf("%d", &iUserChoice);
  
  while (iUserChoice < 0 || iUserChoice > 3)
  {
    printf("Enter a number between 0 and 3\n");
    scanf("%d", &iUserChoice);
  }
 
  printf("Please, choose your rental days:\n");    
  scanf("%d", &iRentalDays); 
  fPriceCamper = (iUserChoice * 100);
  fSumCamper = (fPriceCamper * iRentalDays);
  //totalSumCar = (fSumCamper * DDSTAX); /  amount calculated with VAT  

  printf("Your rent will cost %.2f leva. Enjoy your trip!\n", fSumCamper);

  
  
  
return 0;
}
