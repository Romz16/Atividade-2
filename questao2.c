#include <stdio.h>
#include <math.h>

 double Distancia(double x1 ,double y1, double x2, double y2){ // Função que calcula o valor da distância
    return sqrt(pow((x2-x1),2)+(pow(y2-y1,2)));
}

 int main(){
    double x1,y1,x2,y2; // variaveis que receberão os valores dos pontos 
    printf ("Digite os valores das coordenadas x1 e y1 \n");
    scanf ("%lf",&x1);
    scanf ("%lf",&y1);
    printf ("Digite os valores das coordenadas x2 e y2 \n");
    scanf ("%lf",&x2);
    scanf ("%lf",&y2);
    double dist = Distancia(x1,y1, x2, y2);  
    printf("A distancia entre os pontos e  : %lf",dist);
    return 0;
}