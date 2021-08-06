#include<stdio.h>

typedef struct REG_ALUNO {
     char nome[30];
     int matricula;
     char disciplina[30];
     float nota;
} REG_ALUNO;


REG_ALUNO ler(){

    REG_ALUNO aluno;

    scanf("%s",aluno.nome);
    scanf("%d",&aluno.matricula);
    scanf("%s",aluno.disciplina);
    scanf("%f",&aluno.nota);

    return aluno;
}

void aprovado(REG_ALUNO aluno){

    if(aluno.nota >= 7.0) printf("%s aprovado(a) em %s", aluno.nome, aluno.disciplina);

    else if(aluno.nota < 7.0) printf("%s reprovado(a) em %s", aluno.nome, aluno.disciplina);

}

int main(){

    REG_ALUNO aluno;

    aluno = ler();
    aprovado(aluno);

    return 0;
}