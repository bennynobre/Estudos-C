#include<stdio.h>
#include<string.h>

void inverter(char xuxa[]){

    for(int i=strlen(xuxa); i >= 0; i--){
        printf("%c", xuxa[i]);
    }

}

int main(){

    char xuxa[100];

    scanf("%[^\n]s",xuxa);
    inverter(xuxa);

    return 0;
}