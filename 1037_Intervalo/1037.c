#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	double valor;
	
	scanf("%lf", &valor);
	
	if(valor >= 0 && valor <= 100)
	{
		if(valor <= 25)
			printf("Intervalo [0,25]\n");
		else
			if(valor <= 50)
				printf("Intervalo (25,50]\n");
			else
				if(valor <= 75)
					printf("Intervalo (50,75]\n");
				else
					if(valor <= 100)
						printf("Intervalo (75,100]\n");
	}
	else
		printf("Fora de intervalo\n");

return 0;
}