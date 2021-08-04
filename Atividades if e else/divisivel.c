#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int x=0, y=0,z=0;
	scanf("%d",&x);
	scanf("%d",&y);
	z = x%y;
	if (z != 0){
	printf("nao");
   } else printf("sim");
	
	return 0;
}
