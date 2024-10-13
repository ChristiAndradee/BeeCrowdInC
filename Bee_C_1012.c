#include <stdio.h>
#include <math.h>

double pi = 3.14159;

double calcTriangulo(double A, double C){

    double result = (A*C)/2;
    return result;

}   

double calcCiculo(double C){

    double result = pow(C,2)*pi;
    return result;

}

double calcTrapezio(double A, double B,double C){

    double result = ((A+B)*C)/2;
    return result;

}

double calcQuadrado(double B){

    double result = pow(B,2);
    return result;
    
}

double calcRetangulo(double A, double B){

    double result = A*B;
    return result;
    
}


int main(){

    double A,B,C;
    double triangulo, circulo, trapezio, quadrado, retangulo; 

    scanf("%lf %lf %lf", &A, &B, &C);

    triangulo = calcTriangulo(A,C);
    circulo = calcCiculo(C);
    trapezio = calcTrapezio(A,B,C);
    quadrado = calcQuadrado(B);
    retangulo = calcRetangulo(A,B);

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
  
}