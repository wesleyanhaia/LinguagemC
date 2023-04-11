/*/8) Faça um programa com funções que mostre o salário líquido de um funcionário com
base nos cálculos “a”, “b”, “c” e “d”, a seguir. Crie, no mínimo, uma função
independente para cada cálculo. Inicialmente o programa recebe o número de horas
trabalhadas e o valor do salário base da empresa.
	
	a) A hora trabalhada vale 13% do salário base da empresa;
b) O salário bruto equivale ao número de horas trabalhadas multiplicado pelo
valor da hora trabalhada;
c) O imposto equivale a 7,55% do salário bruto;
d) O salário líquido equivale ao salário bruto menos o imposto./*/

#include <stdio.h>
float funcaoA(float salario);
float funcaoA(float salario){
	
	float salariofinal;
	
	salariofinal=salario*0.13;
	return salariofinal;
}

float funcaoB(float salario, int hora);
float funcaoB(float salario, int hora){
	
	float salariobruto;
	
	salariobruto=hora*salario;
	return salariobruto;
	
	
}
float funcaoC(float R2);
float funcaoC(float R2){
	
	float imposto;
	
	imposto = R2*0.0755;
	return imposto;
	
}
float funcaoD(float R2);
float funcaoD(float R2){
	
	float imposto;
	
	imposto = R2*0.0755;
	imposto =R2 - imposto;
	return imposto;
	
}




main(){
	
	int hora;
	float salariobase, R1, R2, R3, R4;
	
	printf("Qual eh o seu salario base?\n");
	scanf("%f", &salariobase);
	
	printf("Quantas horas voce trabalha por dia?");
	scanf("%d", &hora);
	
	R1=funcaoA(salariobase);
	printf("A sua hora trabalhada vale %f\n", R1);
	
	
	R2=funcaoB(R1, hora);
	printf("O seu trabalho bruto eh %f\n", R2);
	
	R3=funcaoC(R2);
	printf("O seu imposto eh %f\n", R3);
	
	R4=funcaoC(R3);
	printf("O seu salario liquido eh %f\n", R4);
	
	
	
	
	
	
	
	
	
}
