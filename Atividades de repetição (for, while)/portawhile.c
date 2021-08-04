#include <stdio.h>

int main(){
    long int x=1,y=0,z=0,mes=0,i=0;
    
    scanf("%ld",&mes);
    
    if(mes <= 2) printf("1");
    
    else{
        
        for(i=0; i <= mes-1; i++)
                {
                  z = x+y;
                  x = y;
                  y = z;
                }
    
    printf("%ld",z);
        }
    
}
