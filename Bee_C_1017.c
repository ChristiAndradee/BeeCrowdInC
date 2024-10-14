#include <stdio.h>

int main(){

    int tempo, velocidade,viagem;
    double consumo;

    scanf("%d %d", &tempo, &velocidade);

    viagem = tempo*velocidade;

    consumo = viagem/12.0;

    printf("%.3lf\n",consumo);

}