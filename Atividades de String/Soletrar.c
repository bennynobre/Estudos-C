#include<stdio.h>
#include<string.h>

void sol(char soletra[]){

     printf("[");

    for(int i=0; soletra[i] != '\0' ; i++){

        if(soletra[i+1] == '\0'){
            printf("%c",soletra[i]);
        }else{
        printf("%c-",soletra[i]);
        }
    }

    printf("]");
}

int main(){

    char soletra[30];

    scanf("%[^\n]s", soletra);
    sol(soletra);
    

    return 0;
}