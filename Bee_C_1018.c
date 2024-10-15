#include <stdio.h>

int main(){

    int valor, valorInicial, i;
    int intervalos[7];

    for ( i = 0; i < 7; i++)
    {
        intervalos[i] = 0;
    }

    scanf("%d", &valor);

    valorInicial = valor;

    while(valor >= 100){
        valor = valor-100;
        intervalos[0] += 1 ;
    }
     while(valor >= 50){
        intervalos[1] += 1;
        valor  = valor-50;
    }    
     while(valor >= 20){
        intervalos[2] += 1;
        valor = valor-20;
    }  
     while(valor >= 10){
        intervalos[3] += 1;
        valor = valor-10;  
    }
     while(valor >= 5){
        intervalos[4] += 1;
        valor = valor-5; 
    }    
     while(valor >= 2){
        intervalos[5] += 1;
        valor = valor-2;
    }  
    while(valor >= 1){
        intervalos[6] += 1;
        valor = valor-1;
    }  

    printf("%d\n",valorInicial);
    printf("%d nota(s) de R$ 100,00\n",intervalos[0]);
    printf("%d nota(s) de R$ 50,00\n",intervalos[1]);
    printf("%d nota(s) de R$ 20,00\n",intervalos[2]);
    printf("%d nota(s) de R$ 10,00\n",intervalos[3]);
    printf("%d nota(s) de R$ 5,00\n",intervalos[4]);
    printf("%d nota(s) de R$ 2,00\n",intervalos[5]);
    printf("%d nota(s) de R$ 1,00\n",intervalos[6]);

}