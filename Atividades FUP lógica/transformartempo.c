#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int seg=0,min=0,hor=0;
	scanf("%d",&seg);
	min = (seg/60);
	hor = (min/60);
	printf("%.1d:",hor%60);
	printf("%.1d:",min%60);
	printf("%.1d",seg%60);
	
	return 0;
	
}
