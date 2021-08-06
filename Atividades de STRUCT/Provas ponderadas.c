#include<stdio.h>

typedef struct PROVA {

     float nota;
     int peso;

} PROVA;


void LerVet(PROVA prova[],int n){

    for(int i=0; i < n; i++){
       scanf("%f", &(prova[i].nota));
    }

     for(int i=0; i < n; i++){
        scanf("%d", &(prova[i].peso));
    }
}

void res(PROVA prova[], int n){
    float soma=0;
    int somaP=0;

    for(int i=0; i<n; i++){
        soma += (prova[i].nota)*(prova[i].peso);
        somaP += prova[i].peso;
    }

    printf("%.2f", soma/somaP);

}

int main(){
    int n=0;

    scanf("%d", &n);

    PROVA prova[n];

    LerVet(prova,n);
    res(prova,n);

    return 0;
}