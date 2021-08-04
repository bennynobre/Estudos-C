#include<stdio.h>
int trabalho(int x, int hor, int min){
  int aux1, aux2, aux3;
  aux1= ((hor >= 8 && hor < 12)|| (hor >= 14 && hor < 18)) && min <=59;
  aux2= hor >= 8 && hor < 12;
  if(x == 1){
    printf("NAO");
  } else if((x == 2 || x == 3 || x == 4) && aux1){
    printf("SIM");
  } else if((x == 5 || x == 6) && aux1){
    printf("SIM");
  } else if(x == 7 && aux2){
    printf("SIM");
  } else printf("NAO");
  
  return 0;
}


int main(){
  
  int hor=0, min=0, x=0, res=0;
  
  scanf("%d",&x);
  scanf("%d",&hor);
  scanf("%d",&min);
  res= trabalho(x,hor,min);
  
  return 0;
}
