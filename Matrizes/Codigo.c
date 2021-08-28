#include<stdio.h>
#include<stdlib.h>

void cod(int x, int *vet){

    int cont=0;

     for(int i=0; i+2 < x; i++){

      if (vet[i] == 1 && vet[i+1] == 0 && vet[i+2] == 0){
                    cont++;
        }

    }
    
    printf("%d\n", cont);
}

int main(){

    int x=0;
    scanf("%d", &x);
    int *vet=NULL;

     vet = (int*) malloc(x*sizeof(int*));

    for(int i=0; i < x; i++){
        scanf("%d", &vet[i]);
    }

    cod(x,vet);

    free(vet);


    return 0;
}