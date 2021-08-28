#include<stdio.h>
#include<string.h>

void LerVetor(char gaguin[]){

    int j=0;

    for(int i=j; gaguin[i] != '\0'; i++){
        char aux[10];
        int a=0;

        for(j; gaguin[j] != ' '; j++){
            aux[a] = gaguin[j];
            a++;
            if(gaguin[j+1] == '\0'){
                break; 
            }
        
        }
        aux[a] = '\0';
        printf("%s %s ", aux, aux);
        j++;
    }

}

int main(){

    char gaguin[50];

    scanf("%[^\n]s", gaguin);
    LerVetor(gaguin);

    return 0;
}