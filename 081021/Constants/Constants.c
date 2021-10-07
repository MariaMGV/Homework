/*Да се дефинира константата Пи (3.14159...) и да се напише функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).  
В main() да се извика горната функция с радиуси 1, 1.5, 13.
+
Да се добави втора функция, която изчислява лицето на елипса по зададени два параметъра ( Пи * A * B) */


#include <stdio.h>
#include <math.h>
//define PI 3.14159; => PI will be used instead const double g_Pi

float sCircle(float fRadius);
float sEllips(float A, float B);
const float g_Pi = 3.14159;

int main()
{
float fRadius, A, B;

//CIRCLE
printf("The face of a circle: %f\n",sCircle(1));
printf("The face of a circle: %f\n",sCircle(1.5));
printf("The face of a circle: %f\n\n",sCircle(13));

// ELLIPSE
printf("The face of an ellipse: %f\n",sEllips(5,3));
printf("The face of an ellipse: %f\n",sEllips(1.5,1));
printf("The face of an ellipse: %f\n",sEllips(13,18.5));

return 0;

}

 float sCircle(float fRadius)
 {
      return ( g_Pi * fRadius * fRadius);
 }

 float sEllips(float A, float B)
 {
      return (g_Pi * A * B);
 }
