#include<stdio.h>
#include<math.h>
int conta(int a){
	
int c1=20,c2=140,c3=100, b=7;
int n=0, dif=0;

        if(a <= 10){
        	n=7;
      	printf("R$ %d",n); return 0;
	  }
	   if(a >= 11 && a <= 30){
	   	    n=7;
	   	    dif=(a-10)*1;
      	printf("R$ %d",n+dif); return 0;
	  }
	   else if(a >= 31 && a <= 100){
	   	   n=27;
	   	   dif=(a-30)*2;
	  	printf("R$ %d",n+dif); return 0;
	  }
	   else if(a >= 101){
	   	   n=167;
	   	   dif=(a-100)*5;
	  	printf("R$ %d",n+dif); return 0;
	  }
	return 0;
	
}
int main(){
	
	int agua=0, res=0, a=0;
	scanf("%d",&agua);
	res = conta(agua);
	
	return 0;
}
