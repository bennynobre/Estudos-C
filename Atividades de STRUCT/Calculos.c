#include<stdio.h>

typedef struct EXPRESSAO {
     float num1;
     float num2;
     char operador;
} EXP;

EXP xp(){

    EXP expressao;

    scanf("%f", &expressao.num1);
    scanf("%f", &expressao.num2);

    return expressao;

}

void res(EXP expressao){

    printf("%.0f ", (expressao.num1)+(expressao.num2));
    printf("%.0f ", (expressao.num1)-(expressao.num2));
    printf("%.1f ", (expressao.num1)/(expressao.num2));
    printf("%.0f ", (expressao.num1)*(expressao.num2));
    
}

int main(){

    EXP expressao;

    expressao = xp();
    res(expressao);


    return 0;
}