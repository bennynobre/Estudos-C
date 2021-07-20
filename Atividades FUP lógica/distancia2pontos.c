#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	double cx1=0,cy1=0,cx2=0,cy2=0,ponto=0,a=0,b=0;
	scanf("%lf",&cx1);
	scanf("%lf",&cy1);
	scanf("%lf",&cx2);
	scanf("%lf",&cy2);
	a = (cx2-cx1);
	b = (cy2-cy1);
	ponto = sqrt(pow(a,2)+pow(b,2));
	printf("%.2lf\n",ponto);
	
	return 0;
}
