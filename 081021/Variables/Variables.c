/* Напишете глобална променлива, която увеличаваме с 1 във
функция void test(). Извикайте функцията три пъти test() от main() 
принтирайте стойността на глобалната променлива. + Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача */

// GLOBAL VARIABLE = WITH key word "extern" in a header file:

#include<stdio.h>

int variable = 0; 
void test();

int main()
{

    int i;
    for (i=0; i< 3; i++)
    {
        test();
    }

    printf("%d\n",variable);

        
  return 0;
}

void test()
{
 variable = variable + 1;
 
}

/*

// GLOBAL VARIABLE WITHOUT "extern":

#include<stdio.h>

int g_Variable = 0; 

void test();

int main()
{

    int i;
    for (i=0; i < 3; i++)
    {
        test();
    }

    printf("%d\n",g_Variable);
    
  return 0;
}


void test()
{
 g_Variable = g_Variable +1;
 
}

// STATIC VARIABLE

#include<stdio.h>

int test();

int main()
{

    for (int i = 0; i < 2; i++)
    {
        
        test();
    }

    printf("%d\n",test());
      
  return 0;
}

int test()
{
 static int x = 0;
 x ++;
}



*/
