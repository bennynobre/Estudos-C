#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int l=0,c=0;
	scanf("%d",&l);
	scanf("%d",&c);
	l = l%2;
	c = c%2;
	int cor = (l==c) ? 1 : 0; //COR DA CASA DO XADREZ 1(BRANCO) 0(PRETO)
	printf("%d\n",cor);
	
	return 0;
}
