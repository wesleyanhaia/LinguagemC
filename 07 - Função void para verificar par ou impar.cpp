#include <stdio.h>

void PouI(int a);
void PouI(int a){
		
	if(a%2==0){
		printf("O numero que voce digitou eh par");
	}
	else{
		printf("O numero que voce digitou eh impar");
	}
}
main(){
	
	int n1;
	
	printf("Digite um numero e eu vou falar se ele eh par ou impar: ");
	scanf("%d", &n1);
	PouI(n1);
	
}
