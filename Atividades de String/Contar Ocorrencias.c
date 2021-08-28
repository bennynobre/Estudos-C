#include<stdio.h>
#include<string.h>

void tam(char frase[],char letra){
    int cont=0;

    for(int i=0; frase[i] != '\0'; i++){
        if(frase[i] == letra){
            cont++;
        }
    }
    printf("%d", cont);

}

int main(){

    char frase[100];
    char letra;

    scanf("%[^\n]s", frase);
    scanf(" %c",&letra);

    tam(frase,letra);

    return 0;
}