#include<stdio.h>
#include<stdlib.h>

void campo(char **M, int linha, int coluna){


    for(int i=0; i < linha; i++){
        for(int j=0; j < coluna; j++){
            scanf(" %c", &M[i][j]);
        }
    }

    for(int i=0; i < linha; i++){
        int cont=48;

        for(int j=0; j < coluna; j++){
            if(M[i][j] == '-'){
            
            if( i != linha-1 && j != coluna-1 && M[i+1][j+1] == '*'){
                cont++;
            }
             if( i != linha-1 && j != 0 && M[i+1][j-1] == '*'){
                cont++;
            }
             if( i != 0 && j != coluna-1 && M[i-1][j+1] == '*'){
                cont++;
            }
             if( i != 0 && j != 0 && M[i-1][j-1] == '*'){
                cont++;
            }
             if( j != coluna-1 && M[i][j+1] == '*'){
                cont++;
            }
             if( i != linha-1 && M[i+1][j] == '*'){
                cont++;
            }
             if( j != 0 && M[i][j-1] == '*'){
                cont++;
            }
             if( i != 0 && M[i-1][j] == '*'){
                cont++;
            }
             if( cont > 48){
                M[i][j] = cont;
            }
            cont=48;
        }
    }
}

    for(int i=0; i < linha; i++){
        for(int j=0; j < coluna; j++){
            printf("%c", M[i][j]);
        }
        printf("\n");
    }
    

}

int main(){

    int linha=0, coluna=0;
    char **M=NULL;

    scanf("%d", &linha);
    scanf("%d", &coluna);

    M = (int**) malloc(linha*sizeof(int*));

    for(int i=0; i < linha; i++){  
        M[i] = (int*) malloc(coluna*sizeof(int));
    }

    campo(M, linha, coluna);

    for (int i = 0; i < linha; i++){
        free (M[i]);
    }
    free(M);


    return 0;
}