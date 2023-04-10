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
