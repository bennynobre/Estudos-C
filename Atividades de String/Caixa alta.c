#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void res(char frase[]){

    for(int i=0; frase[i] != '\0'; i++){

        if(frase[i] > 64  && frase[i] < 91){
            frase[i]+= 32;
        }
        else if(frase[i] > 96  && frase[i] < 123){
            frase[i]-= 32;
        }

    }
    printf("%s", frase);
}

int main(){

    char frase[50]; // 32
    scanf("%[^\n]s", frase);

    res(frase);

    return 0;
}