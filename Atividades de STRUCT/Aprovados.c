#include<stdio.h>

typedef struct REG_ALUNO{

     char nome[30];
     float notas[3];
     float media;

} ALUNO;

void ler(ALUNO aluno[], int n){

    for(int i=0; i < n; i++){
        scanf("%s", aluno[i].nome);

        for(int j=0; j < 3; j++){

        scanf("%f", &aluno[i].notas[j]);
   
        }
    }
}

void res(ALUNO aluno[], int n){

    float cont=0, soma=0;

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){

        soma += aluno[i].notas[j];
        cont++;

        }
        aluno[i].media = soma/cont;

        soma = 0;
        cont = 0;

        if(aluno[i].media >= 7.0){
        printf("%s %.2f\n", aluno[i].nome, aluno[i].media);
        }
    }
}

int main(){

    ALUNO aluno[3]; 

    ler(aluno,3);
    res(aluno,3);

    return 0;
}