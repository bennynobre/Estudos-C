#include<stdio.h>

int main(){
    int x=0;
    int* p;

    p = &x;
    *p = 2;
    printf("%d\n", x);
    printf("%p\n", p); // imprime o endereço da memória

    return 0;
}