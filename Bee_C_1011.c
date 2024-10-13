#include <stdio.h>
#include <math.h>

double calcVolume(double R){
    double volume, pi = 3.14159;
    volume = ((4.0/3)*pi)*pow(R,3);
    return volume;
}

int main(){

    double R, volume;

    scanf("%lf",&R);
    volume = calcVolume(R);

    printf("VOLUME = %.3lf\n",volume);

}