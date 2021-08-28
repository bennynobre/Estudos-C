#include<stdio.h>
#include<string.h>

void res(char frase[]){

    int a=0;
    char vc[50];
    char aux;

    for (int i = 0; frase[i] != '\0'; i++){
    
        if(frase[i] == ' '){
            vc[a] = ' ';
            a++;
        }

        else if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ){
 
            vc[a] = 'v';
            a++;

        }else if(frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){

            vc[a] = 'v';
            a++;
        }
        else{
            vc[a] = 'c';
            a++;
        }

    }
    vc[a] = '\0';
    
    printf("%s", vc);

}

int main(){

    char frase[100];
    scanf("%[^\n]s",frase);
    res(frase);

    return 0;
}