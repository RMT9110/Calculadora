#include<stdio.h>
main(){
	float soma,multiplicacao,divisao,subtracao;
	float numero1,numero2;
	printf("**** Calculadora ****\n");
	
	printf("Digite o primeiro numero:  ");
	scanf("%f",&numero1);
	
	printf("Digite o segundo numero:   ");
	scanf("%f",&numero2);
	
	soma=numero1+numero2;
	subtracao=numero1-numero2;
	divisao=numero1/numero2;
	multiplicacao=numero1*numero2;
	
	printf("soma :%.2f \n",soma);
	printf("subtracao:%.2f \n",subtracao);
	printf("Divisao:%.2f \n",divisao);
	printf("multiplicacao:%.2f \n",multiplicacao);	
	


git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/RMT9110/Calculadora.git
git push -u origin main
	return 0;
	
	
}
