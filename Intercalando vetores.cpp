/*Escreva um programa que l� o tamanho e na sequ�ncia 2 vetores. Ap�s a
leitura o programa deve intercalar os valores dos dois vetores inteiros de
mesmo tamanho em um terceiro vetor. Assuma que, a dimens�o do terceiro
vetor � pelo menos duas vezes a dimens�o de cada um dos outros vetores. No
final imprima o novo vetor com os elementos intercalados*/

#include <stdio.h>
#include <conio.h>
main(){
	
	
	int i, j, k, vetora[1], vetorb[1], vetorc[3];
	
	
	for(i=0; i<=1; i++){
	
	printf("Digite um numero pro primeiro vetor: ");
	scanf("%d", &vetora[i]);
	
	}
	
	for(i=0; i<=1; i++){
	
	printf("Digite um numero pro segundo vetor: ");
	scanf("%d", &vetorb[i]);
	
	}
	j=0;
	for(i=0; i<2; i++){
	
	vetorc[j]=vetora[i];
	j++;
	vetorc[j]=vetorb[i];
	j++;
	}
	
	for(i=0; i<=3; i++){
	
	printf("%d", vetorc[i]);
	
	}
		
		
		
		getch();
	
	}
	
	
	
