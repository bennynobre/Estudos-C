#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void comp(char **v, int n){


    for (int i = 1; i < n; i++){
        for (int j = 0; j < n - 1; j++) {
            if (strcmp (v[j] , v[j + 1]) > 0){

            char *aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
     }
   }
 }
    for(int i=0; i < n; i++){
        printf("%s\n", v[i]);
        free(v[i]);
    }
    free(v);


}

int main(){

    int n=0;
    scanf("%d", &n);

    char **v=NULL;

    v = (char**)malloc(n*sizeof(char*));

    for(int i=0; i < n; i++){
        int aux=0;
        scanf("%d ",&aux);

        v[i] = (char*)malloc((aux+1)*sizeof(char*));
        scanf("%[^\n]s", v[i]);
    }

    comp(v,n);


    return 0;
}