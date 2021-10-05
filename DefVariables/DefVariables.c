/*
Задачи
6. Дефинирайте променливи със стойност -127, 255, 63 498, 4 294 967 292, -9 000 
000 000 000 775 845.
Изведете всяка променлива на екрана със printf()


7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357 
674 000, 3 657 895 000.

8. Да прочетем какво се случва със стойността на променливата x:
char x = 8;
x = x -2;
x= x+ 6;
x= x – 10 + 2;
Каква ще бъде стойността на x, ако я отпечатаме на екрана след последната 
калкулация?

Задачи
9. Дефинирайте променливи със стойност
4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438 
583 853.39875937284928422.
*//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{

    // TASK 6
    signed char a = -127;
    unsigned char b = 255;
    unsigned short int c = 63498;
    unsigned int d = 4294967292;
    signed long long int e =-9000000000000775845;

    printf ("signed char a = %d\nunsigned char b = %d\nunsigned short int c = %hu\nunsigned int d = %u\nsigned long long int e = %lli\n\n",a,b,c,d,e); // 

    // TASK 7
   short int f = 24212;   
   signed int g = -1357674;
   unsigned int h = 1357674;
   unsigned int i = -1357674000;
   unsigned int j = 3657895000; 

    printf ("short int f = %hi\nsigned int g = %d\nunsigned int h = %u\nunsigned int i = %u\nunsigned int j = %u\n\n", f,g,h,i,j); 

    // TASK 8

    char x = 8;
    x = x - 2;             
    // 8 = 8-2        => 6
    x = x + 6;             
    //  6 = 6 + 6      =>12
    x = x - 10 + 2;        
    // 12 = 12-10 +2   => 12 - 10 + 2  => 4

    printf("x= %d\n\n",x);

    // TASK 9

    
  float k = 4.9876543;
  long double l = 7.1234567890123456789;
  float m = 18398458438583853.28;
  signed long long n = 18398458438583; 
  long double o = 853.39875937284928422;

  printf("float k = %f\nlong double l = %Lf\nfloat m = %f\nsigned long  n = %lld\nlong double o = %lf\n\n",k,l,m,n,o);

  


    return 0;
}