#include<stdio.h>
#include<stdlib.h>


void swap(int* a, int* b){
int aux=0;

    aux = *a;
    *a = *b;
    *b = aux;

}

int main(){

    int *px=NULL, *py=NULL;

    px = (int*) malloc(sizeof(int));
    py = (int*) malloc(sizeof(int));

    scanf("%d", px);//*px = 2;
    scanf("%d", py); //*py = 3;

    swap(px,py);
    printf("x=%d, y=%d\n", *px, *py);
    free(px); px = NULL; // atribuir o NULL para o ponteiro não pegar lixo na memória
    free(py); py = NULL; // free ele desaloca a memória.


    return 0;
}