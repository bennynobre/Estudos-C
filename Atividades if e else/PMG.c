#include<stdio.h>
int maior(int x, int y, int z){
	char P, M, G;
	if(x > y && y > z && x > z){
		printf("G M P"); return 0;
	} else if(x < y && y > z && x > z){
		printf("M G P"); return 0;
	} else if(x < y && y < z && x < z){
		printf("P M G"); return 0;
	} else if(x > y && y < z && x > z){
		printf("G P M"); return 0; 
	} else if(x < y && y > z && z > x){
		printf("P G M"); return 0;
	} else if(x > y && y < z && z > x){
		printf("M P G"); return 0;
	}
	
	
	return 0;
}


int main(){
	
	int x=0, y=0, z=0, res=0;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	res = maior(x,y,z);
}
