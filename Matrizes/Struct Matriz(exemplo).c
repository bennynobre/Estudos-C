#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int matricula;
    char nome[30];
    double media;
} REG_ALUNO;

REG_ALUNO lerAluno() {
    REG_ALUNO alu;
    scanf("%d",&alu.matricula);
    scanf("%s",alu.nome);
    scanf("%lf",&alu.media);
    return alu;
}

void imprimirAluno(REG_ALUNO alu) {
    printf("Nome: %s\n",alu.nome);
    printf("Matrícula: %d\n",alu.matricula);        
    printf("Média: %.2lf\n",alu.media);
}

void ler(REG_ALUNO **M, int nlin, int ncol) {
  for(int i=0;i<nlin;i++)
     for(int j=0;j<ncol;j++) {
        printf("Digite o elemento M[%d][%d]: ",i,j);
        M[i][j] = lerAluno();
     }
}

void imprimir(REG_ALUNO **M, int nlin, int ncol) {
  for(int i=0;i<nlin;i++) {
     for(int j=0;j<ncol;j++) {
        imprimirAluno(M[i][j]);
     }
     printf("\n");
  }
}

int main() {
    int nlin=0,ncol=0;
    REG_ALUNO **M=NULL;
    
    printf("Digite o número de linhas: ");
    scanf("%d",&nlin);
    printf("Digite o número de colunas: ");
    scanf("%d",&ncol);
    M = (REG_ALUNO**) malloc(nlin*sizeof(REG_ALUNO*));
    for(int i=0;i<nlin;i++) M[i] = (REG_ALUNO*) malloc(ncol*sizeof(REG_ALUNO));
    
    ler(M,nlin,ncol);
    imprimir(M,nlin,ncol);

    for(int i=0;i<nlin;i++) free(M[i]); // Libera memória de cada linha
    free(M); // Libera memória do vetor de ponteiros
    M=NULL;

    return 0;
}