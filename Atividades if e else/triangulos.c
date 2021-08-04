#include<stdio.h>

int triangulo(int x, int y, int z){
	int aux1, aux2, aux3, aux4, aux5, aux6;
	aux1 = x+y >= z;
	aux2 = y+z >= x;
    aux3 = x+z >= y;
    
    if(x+y < z || y+z < x || z+x < y){
    	printf("invalido");
	}
	  else if(aux1= x != y && y != z && z != x){
		printf("Escaleno");
	} else if(aux2= (x == y && y == z && z == x)){
		printf("Equilatero");
	} else if(aux3= (x == y || y == z || z == x)){
		printf("Isolceles");
	}
	
	
	return 0;
}


int main(){
	int x=0, y=0, z=0, res=0;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	res = triangulo(x,y,z);
	
	
	
	return 0;
}
