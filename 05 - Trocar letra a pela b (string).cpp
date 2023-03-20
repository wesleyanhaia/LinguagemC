#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

main(){
	int i, cont=0, tamanho=0;
	char frase[30];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	tamanho=strlen(frase);
	
	for(i=0; i<tamanho; i++){
		
		if(toupper(frase[i])=='A'){
			
			frase[i]='b';
		}
	}
	printf("A sua frase modificada ficou assim: %s", frase);
}
