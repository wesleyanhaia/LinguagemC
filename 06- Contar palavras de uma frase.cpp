#include <stdio.h>

main(){
	
	char frase[50], palavras=1, i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i=0; i<50; i++){
		if(frase[i]==' '){
			palavras++;
		}
	}
	
	printf("a quantidade de palavras nessa frase é de %d", palavras);
}
