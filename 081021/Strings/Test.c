/*Ако имаме символен низ char str[] = “HELLO”, заменете //всичките символи с главна буква със съответните символи с малка 
буква.


......................................................................................................................*/
#include <stdio.h>
#include <ctype.h>
#include<string.h>


// 2. TASK  "HELLO" = "hello" = SOLUTION with and without FOR LOOP

// FOR LOOP -"HELLO" = "hello"

int main() 
{
   int i, count;   
   char cH_Letter, cE_Letter, cL_Letter, cO_Letter;
   cH_Letter = 'h';
   cE_Letter = 'e';
   cL_Letter = 'l';
   cO_Letter = 'o';

   char str[] = "HELLO";
   count = strlen(str) -1;

while(str[i] <= count)
{
   if( str[i] == 'H')
   {
       
   }
   printf("%c", str[i]);
   i++;
   
}




    return 0;
}

