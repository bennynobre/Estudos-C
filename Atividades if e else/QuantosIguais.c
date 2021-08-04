#include<stdio.h>

int maior(int a, int b, int c){
	
	int cont = 0;
	
	if(a==b && b==c){
		cont = 3;
	}
	if(a==c && a!=b){
		cont++;
		cont++;
	}
	if(a==b && a!=c){
		cont++;
		cont++;
	}
	if(b==c && b != a){
		cont++;
		cont++;
	}
	if(a != b && a != c && c != b){
		printf("1\n");
	}
	
printf("%d",cont);
	
	
   
}

int main(){
	int a=0, b=0, c=0, res=0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	res = maior(a,b,c);
	printf("%s",res);
    
	return 0;
}


