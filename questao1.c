#include <stdio.h>
#include <math.h>

//Fuções com formulas para realização dos calculos 

 double GrausToRadianos(double valorg) { //Graus para Radianos
    return valorg * 3.141593 / 180;
            }
 double RadianostoGraus(double valorr){ //Radiano para Graus
    return valorr * 180 / 3.141593;
}

 double CelciustoFahrenheit(double valorc){ //Celcius para Fahrenheit
    return valorc*1.8 +32;
}

 double CelciustoKelvin(double valorc){ //Celcius para Kelvin
    return valorc + 273.15;
}

 double KelvintoCelsius(double valork){ //Kelvin para celcius
    return valork - 273.15;
}

 double KelvintoFahrenheit(double valork){ //Kelvin para Fahrenheit
    return (valork - 273) * 1.8 +32;
}

 double FahrenheittoCelsius(double valorf){ //Fahrenheit para Celsius
    return (valorf - 32)/1.8;
}

 double FahrenheittoKelvin(double valorf){ //Fahrenheit para Kelvin
    return ((valorf - 32) * 5/9) + 273;
}

 int main() {
    char op; //Variavel que vai receber a opção selecionada
   printf(" ### CONVERSOR DE UNIDADES###\n");
   printf("\t 1) Angulo\n" );
   printf("\t 2) Temperatura\n" );
   printf(" Digite uma opcao:\n");
   scanf("%c",&op);
   switch (op) //switch armazenando as possibilidades de escolha
   {
   case '1'/* caso seja escolhido angulo */:
        printf(" Qual a unidade de origem ?\n");
        printf("\t 1) Graus\n" );
        printf("\t 2) Radianos\n" );
        printf(" Selecione uma opcao:\n");
        int op2; //Variavel que vai receber a opção selecionada
        scanf("%d",&op2);
        if (op2 == 1) //caso seja selecionada a opção Graus como unidade de origem
        {
            double ValorRadianos,valorg  ;
            printf(" Digite o valor em Graus: ");
            scanf("%lf",&valorg);
            ValorRadianos = GrausToRadianos(valorg); //Função que realizará os calculos de conversão 
            printf(" Valor em radianos: %.6lf",ValorRadianos);
        }
        else if (op2 == 2) // caso seja selecionada a opção Radianos como unidade de origem
        {
            double ValorGraus,valorr;
            printf(" Digite o valor em Radianos (PI=3,141593): ");/* Aviso do valor que será considerado para PI*/
            scanf("%lf",&valorr);
            ValorGraus = RadianostoGraus(valorr); //Função que realizará os calculos de conversão 
            printf(" Valor em graus: %.6lf",ValorGraus);/* code */
        }
        
        else {
            printf("Opicao invalida");
        }
       break;
       
    case '2'/* Caso seja selecionado Temperatura */:
        printf(" Qual a unidade de origem ?\n");
        printf("\t 1) Celsius\n" );
        printf("\t 2) Fahrenheit\n" );
        printf("\t 3) Kelvin\n" );
        printf(" Selecione uma opcao:\n");
        int op3;
        scanf("%d",&op3);
        if (op3 == 1) // Caso Celcius seja seja escolhido como origem
        {
            double ValorFahrenheit,ValorKelvin,valorc  ;
            printf(" Digite o valor em Celsius: ");/* code */
            scanf("%lf",&valorc);
            ValorFahrenheit = CelciustoFahrenheit( valorc ); //Função de conversão 
            ValorKelvin = CelciustoKelvin( valorc ); //Função de conversão 
            printf(" Valor em Fahrenheit: %.6lf\n",ValorFahrenheit);
            printf(" Valor em Kelvin: %.6lf\n",ValorKelvin);
        }
        
        else if (op3 == 3) // Caso Kelvim seja seja escolhido como origem
        {
            double ValorFahrenheit,ValorCelsius,valork  ;
            printf(" Digite o valor em Kelvim: ");
            scanf("%lf",&valork);
            ValorFahrenheit = KelvintoFahrenheit( valork ); //Função de conversão
            ValorCelsius = KelvintoCelsius( valork ); // Função de conversão
            printf(" Valor em Celsius: %.6lf\n",ValorCelsius);
            printf(" Valor em Fahrenheit: %.6lf\n",ValorFahrenheit);
        }
        
        else if (op3 == 2) // Caso Fahrenheit seja seja escolhido como origem
        {
            double ValorCelsius,ValorKelvin,valorf  ;
            printf(" Digite o valor em Fahrenheit: ");
            scanf("%lf",&valorf);
            ValorCelsius = FahrenheittoCelsius( valorf ); // Função de conversão
            ValorKelvin = FahrenheittoKelvin( valorf ); // Função de conversão
            printf(" Valor em Celsius: %.6lf\n",ValorCelsius);
            printf(" Valor em Kelvin: %.6lf\n",ValorKelvin);
        }
        
        else {
            printf("Opicao invalida");
        }/* Caso seja digitada uma opção invalida */
       break;

   default:
    printf("Digite uma opcao valida");
       break;
   }/* Caso seja digitada uma opção invalida */
  return 0;
}