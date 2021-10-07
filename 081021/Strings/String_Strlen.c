/*Задача 3. Напишете програма, която пресмята колко символа има в един
низ преди края на низа, обозначен със символа ‘\0’. Как трябва да изглежда
програмата:
1. Декларираме и инициализираме един низ - char s[ ] = “Hi”;
2. Декларираме и инициализираме променлива i, която ще увеличаваме
всеки път, когато искаме да видим следващия символ от низа “Hi”.
3. Принтираме съответната буква от низа printf(“%c”, s[i]);
4. Принтирайте броя на буквите в низа.
*/

#include <stdio.h>
#include <string.h>

//SOLUTION WITHOUT STRLEN(S) = If we don't know the numbers of letters of the string :

int main()
{

char s[] = "Hi";
int i = 0;


while(s[i] != '\0')
{
    printf("%c", s[i]);
    i++;
}

printf("\nNumber of letters in the string: %d\n",strlen(s));

    return 0;
} 

/* SOLUTION WITH STRLEN(S) = If we use "strlen(s)" for printing the letters of a string : 

#include <stdio.h>
#include <string.h>

int main ()
{
 char s[] = "Hi";
 int count = 0;
 count = strlen(s) - 1;

 for (int i = 0; i < strlen(s); i++)
 {
   printf("%c\n",s[i]); 
 }


return 0;
} 

*/


