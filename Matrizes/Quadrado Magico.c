#include<stdio.h>
#include<stdlib.h>

#define linha 3
#define coluna 3

void Quad(int **M){

    int somaL, somaC, somaD, somaD1;
    int aux1=0, aux2=0, cont2=0;
    int cont = 3-1;

    for(int i=0; i < linha; i++){
        for(int j=0; j < coluna; j++){
          scanf("%d", &M[i][j]);
        }
    }

    somaL = somaC = somaD = somaD1 = 0;
    for(int i=0; i < linha; i++){

        somaD1 += M[cont][i];
        somaD += M[i][i];
        cont--;

    for(int j=0; j < coluna; j++){

        somaL += M[i][j];
        somaC += M[j][i];

      }

      if(aux1 != somaL && i>0){

          cont2++;
          break;
      }
      if(aux2 != somaC && i>0){

          cont2++;
          break;
      }

      aux1 = somaL;
      aux2 = somaC;

      somaL = 0;
      somaC = 0;
    }

    if(cont2 == 0 && somaD == somaD1 && somaD==aux1 && aux2==somaD){
      printf("sim");
    }else{
       printf("nao");
    }


}

int main()
{

    
    int **M=NULL;

    M = (int**) malloc(linha*sizeof(int*));

    for(int i=0; i < linha; i++){  
        M[i] = (int*) malloc(coluna*sizeof(int));
    }

    Quad(M);

    for (int i = 0; i < linha; i++){
        free (M[i]);
    }
    free(M);

    return 0;
}