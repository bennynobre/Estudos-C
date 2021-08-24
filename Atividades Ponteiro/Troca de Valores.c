#include <stdio.h>

// Implemente a função 'troca'.
void troca(int *a, int *b)
{
    int aux=0;

    aux = *a;
    *a = *b;
    *b = aux;

}

int main()
{
   int x, y;
   scanf("%d %d", &x, &y);
   
    troca(&x,&y);
   
   printf("%d %d", x, y);
}