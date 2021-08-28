#include<stdio.h>
#include<string.h>

void res(char sub[]){

    int a=0, b=0, c=0;

    scanf("%d", &a);
    scanf("%d", &b);

    do{
        if(sub[a] == '\0'){
            break;
        }
        printf("%c", sub[a]);

        a++;
        c++;

    }while(c < b);
}

int main(){

    char sub[50];
    scanf("%[^\n]s", sub);;
    res(sub);

    return 0;
}