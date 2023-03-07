/*Escreva um programa que lê o tamanho e na sequência 2 vetores. Após a
leitura o programa deve intercalar os valores dos dois vetores inteiros de
mesmo tamanho em um terceiro vetor. Assuma que, a dimensão do terceiro
vetor é pelo menos duas vezes a dimensão de cada um dos outros vetores. No
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
	
	
	
