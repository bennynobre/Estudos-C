#include<stdio.h>

int main(){
	
	int x=0, y=0, res=0;
	scanf("%d",&x);
	scanf("%d",&y);
	
	for(x; x<=y; x++){
		if(x%2 != 0) res += x;
	}
	
	printf("%d",res);
	
	return 0;
}
