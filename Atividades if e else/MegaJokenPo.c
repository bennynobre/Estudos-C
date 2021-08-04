#include<stdio.h>
#include<string.h>

int id(char str[]) {
    if(strcmp(str,"rock")==0) return 0;
    if(strcmp(str,"fire")==0) return 1;
    if(strcmp(str,"scissors")==0) return 2;
    if(strcmp(str,"human")==0) return 3;
    if(strcmp(str,"sponge")==0) return 4;
    if(strcmp(str,"paper")==0) return 5;
    if(strcmp(str,"air")==0) return 6;
    if(strcmp(str,"water")==0) return 7;
    if(strcmp(str,"gun")==0) return 8;
}

void quemGanha(int id1, int id2) {
    if(id1==id2) printf("empate\n");
    else {
    if(id1<id2) { // descobrir quem tem o menor identificador
            if(id2-id1 <= 4) printf("jog1\n");
            else printf("jog2\n");
        } else {   // id2<id1
        if(id1-id2 <= 4) printf("jog2\n");
            else printf("jog1\n");
        }
    } 
}

int main() {
    char str1[20], str2[20];
    int id1=0, id2=0;

    scanf("%s",str1);
    scanf("%s",str2);
    id1 = id(str1);
    id2 = id(str2);
    quemGanha(id1,id2);

    return 0;
}
