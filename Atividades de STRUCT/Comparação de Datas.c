#include<stdio.h>

typedef struct DATA {
     int dia;
     int mes;
     int ano;
} DT;

DT ler(){

    DT data;

        scanf("%d", &(data.dia));
        scanf("%d", &(data.mes));
        scanf("%d", &(data.ano));

    return data;
    
}
void lerVet(DT data[], int n){
    int i=0;

    for(i; i < n; i++){
        data[i] = ler();
    }

}

void Res(DT data[]){
    int soma=0, soma2=0;


    if(data[0].ano == data[1].ano){

        if(data[0].mes == data[1].mes){
            
            if(data[0].dia == data[1].dia){
                printf("Iguais");
            }else if(data[0].dia < data[1].dia){
                printf("Mais antiga");
            }else{
                printf("Mais recente");
            }

            }else if(data[0].mes < data[1].mes){
                printf("Mais antiga");
            }else{
                printf("Mais recente");
            }
    
                
            }else if(data[0].ano < data[1].ano){
                printf("Mais antiga");
            }else{
                printf("Mais recente");
            }

        } 

int main(){

    DT data[2];

    lerVet(data,2);
    Res(data);

    return 0;
}