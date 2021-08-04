#include<stdio.h>
int jogo(int jog1, int jog2, int jog3){
	
		
	if(jog1 == jog2 && jog2 == jog3){
		printf("Empate");
	}else if(jog1 == jog2 && jog2 != jog3){
		printf("jog3");
	}else if(jog1 != jog2 && jog2 == jog3){
		printf("jog1");
	}else if(jog1 != jog2 && jog1 == jog3){
		printf("jog2");
	}
	
}

int main(){
	
	int jog1=0, jog2=0, jog3=0, res=0;
	scanf("%d",&jog1);
	scanf("%d",&jog2);
	scanf("%d",&jog3);
      
    res= jogo(jog1,jog2,jog3);
	
	return 0;
}
