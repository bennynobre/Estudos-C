#include<stdio.h>

typedef struct ALUNO_
{
    int matricula;
    char nome[30];
    double media;
} ALUNO;

ALUNO ler(){
    ALUNO aluno;
    
    scanf("%d", &(aluno.matricula));
    scanf("%s", (aluno.nome));
    scanf("%lf", &(aluno.media));
    return aluno;
}

void LerVetor(ALUNO aluno[], int n){
    int i=0;
    
    for (i; i < n; i++)
    {
        aluno[i] = ler();
    }
    
}

void ImprimirRes( ALUNO aluno[], int n){
    int i=0;

    for(i; i < n; i++){

        printf("Nome: %s\n",(aluno[i].nome));
        printf("Matricula: %d\n",(aluno[i].matricula));        
        printf("Media: %.2lf\n",(aluno[i].media));
        printf("\n");
    
    }
}

int main(){

    int n=0;
    ALUNO aluno[3];

    LerVetor(aluno,3);
    ImprimirRes(aluno,3);

    return 0;
}