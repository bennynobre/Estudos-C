#include<stdio.h>

typedef struct REG_ALUNO {

      char nome[30];
     float notas[3];

} ALUNO;

void ler(ALUNO aluno[], int n){

    for(int i=0; i < n; i++){
        scanf("%s", aluno[i].nome);

        for(int j=0; j < 3; j++){

        scanf("%f", &aluno[i].notas[j]);
   
        }
    }
}

void ImprimirRes(ALUNO aluno[], int n){

    float soma=0, cont=0;

    for(int i=0; i < n; i++){
        for(int j=0; j < 3; j++){

        soma += aluno[i].notas[j];
        cont++;
        }
    }

    printf("%.2f", soma/cont);

}


int main(){

    ALUNO aluno[2];

    ler(aluno,2);
    ImprimirRes(aluno,2);


    return 0;
}