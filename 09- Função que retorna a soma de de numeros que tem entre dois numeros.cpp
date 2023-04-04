#include <stdio.h>
	int i=0, soma;
int retornador(int a, int b);
int retornador(int a, int b){

	
	if(a<b){
		for(i=a+1; i<b; i++)
			soma=soma+i;
		
		return soma;
	}
	else{
		for(i=b+1; i<a; i++ )
		soma=soma+i;
		return soma;
	}
	
}
main(){
	
	int n1, n2, resultado, i, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	
	printf("Digite um outro numero: ");
	scanf("%d", &n2);
	
	
	resultado=retornador(n1, n2);
	
	printf("A soma eh %d", resultado);
	
	
	
}
