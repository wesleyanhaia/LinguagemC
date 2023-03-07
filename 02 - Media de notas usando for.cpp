#include <stdio.h>

	main()
	{
		
		int i;
		float n1, cont=0, nota;
		
		for(i=1; i<=4; i++){
			
			printf("Digite sua nota: ");
			scanf("%f", &n1);
			
			cont= cont+n1;
			
		}
		
		nota=cont/4;
		printf("Sua nota final eh %f", nota);


	}
