#include<stdio.h>

int maior(int a, int b, int c, int d){
   if(a >= b && a >= c && a >= d) return a;
   if(b >= a && b >= c && b >= d) return b;
   if(c >= a && c >= b && c >= d) return c;
   else return d;
}

int main(){
	int a=0, b=0, c=0, d=0, res=0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	res = maior(a,b,c,d);
	printf("%d",res);

	return 0;
}
