#include <stdio.h>
int main(){
    int n=0,b=1,i=0;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        b+=b;
    }
    
    printf("%d",b);
}
