#include <stdio.h>

int retornador(int a);
int retornador(int a){
	
	if(a%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
main(){
	
	int n1, resultado;
	
	printf("Digite um numero e eu vou falar se ele eh par ou impar: ");
	scanf("%d", &n1);
	resultado= retornador(n1);
	
	printf("O resultado eh %d", resultado);
	
}
