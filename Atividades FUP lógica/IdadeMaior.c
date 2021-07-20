#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int m=0,a=0,b=0,c=0;
	scanf("%d",&m);
	scanf("%d",&a);
	scanf("%d",&b);
	c = (m-(a+b));
    int maior=(a > b) ?a:b;
    maior = (c>maior) ?c:maior;
	printf("%d",maior);
	
	
	
	return 0;
}
