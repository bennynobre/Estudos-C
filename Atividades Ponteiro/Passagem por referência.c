#include<stdio.h>

void swap(int* a, int* b){
int aux=0;

    aux = *a;
    *a = *b;
    *b = aux;

}
        
int main(){

    int x=2, y=3;
    int* p;

    swap(&x,&y);
    printf("x=%d, y=%d\n", x,y);


    return 0;
}