/*Задача 5. Ако имаме символен низ char str[] = “Hеllo”, заменете буквите l с х на същия символен низ и отпечатайте резултата на
конзолата.
......................................................................................................................*/

#include <stdio.h>
#include <string.h>
#include<ctype.h>

// 1.TASK "Hello" = >"Hexxo" = 2 SOLUTIONS => with and without FOR LOOP
// 2.TASK "HELLO" = > "hello"


// TASK 1: FOR LOOP -"Hello" = >"Hexxo"

int main()
{

char letterX, letterL;
int count;

char str[] = "Hello";
letterL = 'l';
letterX = 'x';
count = strlen(str) - 1;

 for(int i=0; i <= count; i++)
 {
    if(str[i] == letterL)
    {
      str[i] = letterX;
    }
 }

printf("%s\n",str); 

return 0;
}

/*
// WITHOUT FOR LOOP -"Hello" = >"Hexxo"

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
char str [6] = "Hello";
str[2] = 'x';
str[3] = 'x';
printf("%s\n", str); 

return 0;
} 

/*********************************************************************************************************

// TASK 2:

#include <stdio.h>
#include <ctype.h>
#include<string.h>

int main() 
{
   
  char str[] = "HELLO";
  int count;
  count = strlen(str) -1; 

  for (int i=0; i <= count; i++)
{
   
    printf("%c", tolower(str[i]));
}

    return 0;

}
*/