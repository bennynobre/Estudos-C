#include<stdio.h>

float multiplo (float x, float y, float z){

        
		if(x*z == y){printf("sim"); return 0;}
		if(x < 0 && x/y == z){printf("sim"); return 0;}
		if(x == y){printf("sim"); return 0;}
		if(x == 0){printf("sim"); return 0;}
        else {printf("nao"); return 0;}
}

int main(){
	
	float x=0, y=0, z=0;
	
	scanf("%f",&x);
	scanf("%f",&y);
	z = x/y;
	z = multiplo(x,y,z);

	return 0;
}
