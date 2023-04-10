/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores
a R$ 500,00. Faça uma função que receba o salário do funcionário e mostre o valor do
salário reajustado ou uma mensagem, caso o funcionário não tenha direito ao aumento. A
mensagem deve ser uma outra função.*/

#include <stdio.h>
void funcao(float salario);
void mensagem();

void mensagem()
{
	printf("Seu salario nao precisa de reajuste");
}

void funcao(float salario){
	if(salario<500){
		salario=salario*1.3;
		printf("Seu novo salario eh de %f", salario);
	}
	else{
		mensagem();
	}
}


main(){
	float salario;
	printf("Qual o seu salario?");
	scanf("%f", &salario);
	funcao(salario);
}
