#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	double x=0, modulo=0;
	scanf("%lf",&x);
	modulo = fabs(x);
	
	if (x < 0){
	printf("%.1lf",modulo);
   } else printf("%.3f",x);
   
	return 0;
}
