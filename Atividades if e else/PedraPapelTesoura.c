#include<stdio.h>
int spock(char jog1, char jog2){
	
	if(jog1 == jog2){
		printf("empate"); return 0;
	} if(jog1 == 'S' && jog2 == 'P' || jog2 ==  'L'){
		printf("jog1"); return 0;
	} else if(jog1 == 'P' && jog2 == 'R' || jog2 ==  'K'){
		printf("jog1"); return 0;
	} else if(jog1 == 'R' && jog2 == 'L' || jog2 ==  'S'){
		printf("jog1"); return 0;
	} else if(jog1 == 'L' && jog2 == 'K' || jog2 ==  'P'){
		printf("jog1"); return 0;
	} else if(jog1 == 'K' && jog2 == 'S' || jog2 ==  'R'){
		printf("jog1"); return 0;
	} else printf("jog2");
	
	return 0;
}


int main(){
	
	char jog1, jog2;
int res=0;
	scanf(" %c", &jog1);
	scanf(" %c", &jog2);
	res = spock(jog1,jog2);
	
	return 0;
}
