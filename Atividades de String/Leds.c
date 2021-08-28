#include<stdio.h>
#include<string.h>

void res(char numero[], int x){

    int aux=0;
    int soma=0;
    int vet[x];
    int n=0;

    for (n=0; n < x ; n++){

        scanf("%s", numero);    

          for(int i=0; numero[i] != '\0'; i++){

        if(numero[i] == '1' ){ aux = 2;}
        else if(numero[i] == '2' || numero[i] == '3' || numero[i] == '5'){ aux = 5;}
        else if(numero[i] == '6' || numero[i] == '9' || numero[i] == '0'){ aux = 6;}
        else if(numero[i] == '7'){ aux = 3;}
        else if(numero[i] == '4'){ aux = 4;}
        else{aux = 7;}

       soma+=aux;

        }

        vet[n] = soma;
        soma = 0;

    }
    
   for(int i=0; i < x; i++){
       printf("%d Leds\n", vet[i]);
   }

}

int main(){

    char numero[100];
    int x=0;
    scanf("%d", &x);
    res(numero,x);

    return 0;
}
