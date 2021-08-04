#include<stdio.h>
#include<math.h>

int combustivel(float a, float g){
	float aux1, aux2;
	aux1 = a/30;
	aux2 = g/30;
	
	if(aux1 > aux2 ){
		printf("alcool");
	} else{printf("gasolina");}
	
	return 0;
}


int main(){
	
	float a=0, g=0, res=0;
	scanf("%f",&a);
	scanf("%f",&g);
	res = combustivel(a,g);
	
	
	
	return 0;
}
