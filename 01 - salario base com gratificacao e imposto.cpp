#include <stdio.h>
#include <conio.h>

/*/2) Faça um algoritmo que receba o salário-base de um funcionário e mostre o
salário a receber, sabendo-se que esse funcionário tem gratificação de 5%
sobre o salário-base e paga imposto de 7% sobre o salário-base./*/

main(){
	
	float salarioB, gratificacao, salarioF, imposto;
	
	
	printf("Qual seu salario? ");
	scanf("%f", &salarioB);
	
	gratificacao=(salarioB*0.05);
	imposto=(salarioB*0.07);
	
	salarioF=salarioB+gratificacao-imposto;
	
	printf("O seusalario final eh: %f", salarioF);
	
	
	
	getch();
}
