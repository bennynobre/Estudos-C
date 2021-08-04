#include<stdio.h>

int main(){
    
    int c=0, b=0, g=0, m=0, piso=0;
    scanf("%d",&c);
    scanf("%d",&b);
    scanf("%d",&g);
    scanf("%d",&m);
    piso = (b+m+g)/c;
     if ((b+m+g)%c != 0){
         printf("%d\n",piso+1);
     }else {printf("%d\n",piso);}
    
    
    return 0;
}
