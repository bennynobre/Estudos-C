#include<stdio.h>
#include<math.h>

int main(){
    	float cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0, mc =0, mv=0, md=0, mci=0, mu=0, total=0, pago=0;
	printf("Digite o valor da compra:");
	scanf("%f",&total);
	printf("Digite o valor pago:");
	scanf("%f",&pago);
    float troco = pago-total;

    cem=floorf(troco/100);
	float x0=(troco-(cem*100));
	cinquenta=floorf((x0)/50);   // troco 50
	float x1=((x0)-(cinquenta*50));
	vinte=floorf((x1)/20);         // troco 20
	float x2=((x1)-(vinte*20));
	dez=floorf((x2)/10);           // troco 10
	float x3=(x2-(dez*10));
	cinco=floorf((x3)/5);         // troco 5
	float x4=((x3)-(cinco*5));
	dois=floorf((x4)/2);         // troco 2
	float x5=((x4)-(dois*2));
	um=floorf(x5);          // troco 1
	float x6=((x5)-um);
	mc=floorf((x6)/0.5);      // troco 0.50
	float x7=((x6)-(mc*0.5));
	mv=floorf((x7)/0.25);     // troco 0.25
	float x8=((x7)-(mv*0.25));
	md=floorf((x8)/0.1);    // troco 0.10
	float x9=((x8)-(md*0.1));
	mci=floorf((x9)/0.05);    // troco 0.05
	float x10=((x9)-(mci*0.05));
	mu=floorf((x10)/0.01);    // troco 0.01
	
	if(total<pago){
	printf("Para o troco pegue a quantidade de dinheiro listado abaixo:\n");
	printf("Cédulas de R$100.00: %.0f\n",cem);
	printf("Cédulas de R$50.00: %.0f\n",cinquenta);
	printf("Cédulas de R$20.00: %.0f\n",vinte);
	printf("Cédulas de R$10.00: %.0f\n",dez);
	printf("Cédulas de R$5.00: %.0f\n",cinco);
	printf("Cédulas de R$2.00: %.0f\n",dois);
	printf("Moeda de R$1.00: %.0f\n",um);
	printf("Moeda de R$0.50: %.0f\n",mc);
	printf("Moeda de R$0.25: %.0f\n",mv);
	printf("Moeda de R$0.10: %.0f\n",md);
	printf("Moeda de R$0.05: %.0f\n",mci);
	printf("Moeda de R$0.01: %.0f",mu);
	 } else if(total==pago) {
	 	            {printf("Tudo certo, obrigado pela compra!");}
	 	} else {printf("Que pena, faltaram R$ %.2lf\n",troco*-1);}
		             	
	return 0;
}
