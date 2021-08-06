#include<stdio.h>

typedef struct REG_ALUNO {
     char nome[30];
     int matricula;
     char disciplina[30];
     float nota;
} ALUNO;

ALUNO lerAluno(){

    ALUNO aluno;

    scanf("%s",aluno.nome);
    scanf("%d",&aluno.matricula);
    scanf("%s",aluno.disciplina);
    scanf("%f",&aluno.nota);
    return aluno;

}

void LerAlunos(ALUNO aluno[], int n){

    int i=0;

    for(i; i < n; i++){
        aluno[i] = lerAluno();
    }

}

void Res(ALUNO aluno[], int n){


    if(aluno[0].nota > aluno[1].nota){

        printf("%s , %.1f",aluno[0].nome, aluno[0].nota);

    }else if(aluno[0].nota == aluno[1].nota){

        printf("%s e %s , %.1f",aluno[0].nome, aluno[1].nome, aluno[0].nota);

    }else{

        printf("%s , %.1f",aluno[1].nome, aluno[1].nota);
    }
}

int main(){

    ALUNO aluno[2];

    LerAlunos(aluno,2);
    Res(aluno,2);


    return 0;
}