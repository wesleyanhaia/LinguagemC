#include <stdio.h>
#include <conio.h>

/*/2) Fa�a um algoritmo que receba o sal�rio-base de um funcion�rio e mostre o
sal�rio a receber, sabendo-se que esse funcion�rio tem gratifica��o de 5%
sobre o sal�rio-base e paga imposto de 7% sobre o sal�rio-base./*/

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
