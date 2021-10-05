/*Създайте С програма, която калкулира стойността на покупки в магазин за 
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В 
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.*/

#include <stdio.h>



int main()
{

float fTomatoePr = 0, fFlourPr = 0, fYogurtPr = 0, fIceCreamPr = 0, fBonbonsPr = 0, fCandiesPr = 0, fSum = 0, fUserAnswer = 0;

fTomatoePr = 4.5;
fFlourPr = 1.80;
fYogurtPr = 0.60;
fIceCreamPr = 0.60;
fBonbonsPr = 1.50;
fCandiesPr = 0.15;

printf("Hello! Welcome to our shop! What do you want, please?\n How many tomatoes do you want?\n");
scanf("%f",&fUserAnswer);
fSum = (fTomatoePr * fUserAnswer);

printf("How much flour do you want?\n");
scanf("%f",&fUserAnswer);
fSum = fSum +(fFlourPr * fUserAnswer);

printf("How many yogurt?\n");
scanf("%f",&fUserAnswer);
fSum = fSum +(fYogurtPr * fUserAnswer);


printf("How many ice cream?\n");
scanf("%f",&fUserAnswer);
fSum = fSum +(fIceCreamPr * fUserAnswer);

printf("How many bonbons do you want?\n");
scanf("%f",&fUserAnswer);
fSum = fSum +(fBonbonsPr * fUserAnswer);

printf("Do you want candies? How many?\n");
scanf("%d",&fUserAnswer);
fSum = fSum +(fCandiesPr * fUserAnswer);


printf("Your bill is %.2f leva. Have a nice day!\n", fSum);












    return 0;
}