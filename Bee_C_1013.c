#include <stdio.h>

int main(){

 int km;
 double combustivel, consumoM;

 scanf("%d", &km);
 scanf("%lf", &combustivel);

 consumoM = km/combustivel;

 printf("%.3lf km/l\n", consumoM);

}