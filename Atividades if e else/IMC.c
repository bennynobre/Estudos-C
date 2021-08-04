#include<stdio.h>
#include<math.h>

int IMC(float x, float y){
    float z;
	z = x/pow(y,2);
	if(z < 17){
		printf("muito abaixo do peso"); return 0;
	} else if( 17 < z && z < 18.49){
		printf("abaixo do peso"); return 0;
	} else if( 18,5 < z && z < 24.99){
		printf("peso normal"); return 0;
	} else if(25 < z && z < 29.99){
		printf("acima do peso"); return 0;
	} else if( 30 < z && z < 34.99){
		printf("obesidade"); return 0;
	} else if(35 < z && z < 39.99){
		printf("obesidade severa"); return 0;
	} else if(z > 40){
		printf("obesidade morbida"); return 0;
	}
       	
	return 0;
	
}

int main(){
	
	float x=0, y=0,imc=0;
	
	scanf("%f",&x);
	scanf("%f",&y);

	imc = IMC(x,y);
	return 0;
}
