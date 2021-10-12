#include <stdio.h>
#include <ctype.h>

 char Consoante(char letra ){ //Função que vai definir se é ou não cosoante
    if(letra == 'a' || letra == 'A' || letra =='e' || letra == 'E' || letra == 'i' //condição para ser vogal
     || letra == 'I' || letra == '0' || letra == 'O' || letra == 'u' || letra == 'U')
        printf("Nao e uma consoante");
       
    else{
        printf("E uma consoante"); //caso não seja vogal sera consoante
    }  
}
 int main(){
    char letra;
    printf(" Digite uma letra :\n");
    scanf("%c",&letra);
    if (isalpha(letra))
    {
        char cons = Consoante( letra );
    }
    else{
        printf("Isso e um numero");
    }
    return 0;
 }