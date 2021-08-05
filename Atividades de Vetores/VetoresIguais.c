#include<stdio.h>

void compara(int vet1[], int a, int b){

	int cont=0;

  for(int i=0; i < a; i++){
    scanf("%d", &vet1[i]);
  }
  
  scanf("%d",&b);
  int vet2[b];
  
  for(int i=0; i < b; i++){
    scanf("%d", &vet2[i]);
  }
  
  for(int j=0; j < a; j++){
    if(vet1[j] == vet2[j]) cont++;
  }
  
  if(cont == a){
    printf("Iguais");
  } else {
    printf("Diferentes");
  }
	
}

int main(){
  
  int a=0, b=0, cont=0;
  
  scanf("%d",&a);
  int vet1[a];
  
  compara(vet1,a,b);

  return 0;
}
