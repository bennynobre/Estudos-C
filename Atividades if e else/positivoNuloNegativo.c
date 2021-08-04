#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	float x=0;
	scanf("%f",&x);
	
	if (x < 0){
		printf("negativo");
	} else {
		if (x == 0) printf("nulo");
		else printf("positivo");
   }
	return 0;
}
