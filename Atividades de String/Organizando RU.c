#include<stdio.h>
#include<string.h>

void ru(char frase[]){

    int a=0, b=0;
    char vo[26];
    char co[26];
    for (int i = 0; frase[i] != '\0'; i++){
    
        if(frase[i] == ' ');

        else if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' ){
 
            vo[a] = frase[i];
            a++;

        }else{
            co[b] = frase[i];
            b++;
        }

    }
    vo[a] = '\0';
    co[b] = '\0';
    
    printf("%s\n", vo);
    printf("%s", co);

}

int main(){

    char frase[100];
    scanf("%[^\n]s",frase);
    ru(frase);

    return 0;
}