/*Довършете задачата за кемперите от миналия път като добавите променлива, в която да се събират парите, 
които клиентът дължи на компанията.  Принтирайте резултата. Питайте клиента дали иска още налични продукти */


#include<stdio.h>
// #define  DDSTAX 1.2  //float ddsTax = 1.2; / 1.2 is the dds tax multiplier   = > When the amount has to be calculated with VAT


int main()
{

int iCaravans = 0, iCampers = 0, iUserChoice = 0, iRentalDays = 0, inum_Caravan = 0,inum_Camper = 0;
float fPriceCaravan = 0, fPriceCamper = 0, fSumCamper = 0,fCount = 0; // totalSumCar = 0, totalSumCamp = 0; => When the amount has to be calculated with VAT

iCaravans = 3;
iCampers = 3;

printf("What do you want to book?\nChoose 1 for CARAVAN, 2 for CAMPER.\n");
scanf("%d", &iUserChoice);
 
  while( iUserChoice != 3)
  {
    if (iUserChoice == 1)
    {
       printf("How many caravans do you want to book? Choose 0 for none, we have a maximum of 3 caravans:\n");
       scanf("%d", &inum_Caravan); 
       if(inum_Caravan < 0 || inum_Caravan > 3)
       {
         printf("Enter a number between 0 and 3\n");
         scanf("%d", &inum_Caravan);
       }
       printf("Please, choose your rental days:\n");    
       scanf("%d", &iRentalDays);  
       fCount = fCount + inum_Caravan * 90 * iRentalDays;
       //break;
    }
    else if (iUserChoice == 2)
    {
       printf("How many campers do you want to book? Choose 0 for none, we have a maximum of 3 campers:\n");
       scanf("%d", &inum_Camper); 
       if(inum_Camper < 0 || inum_Camper > 3)
       {
         printf("Enter a number between 0 and 3\n");
         scanf("%d", &inum_Camper);
       }
       printf("Please, choose your rental days:\n");    
       scanf("%d", &iRentalDays);       
       fPriceCamper = (iUserChoice * 90);
       fCount = (fPriceCamper * iRentalDays);

    }
    printf("Do you want to continue with the order? Choose 1 for CARAVAN, 2 for CAMPER or 3 READY WITH THE ORDER.\n");
    scanf("%d", &iUserChoice);
    printf("Your rent will cost %.2f leva. Enjoy your trip! :)\n", fCount);
    //totalSum = (fCount * DDSTAX); /  amount calculated with VAT

  
   }
  
  
  
return 0;
 }