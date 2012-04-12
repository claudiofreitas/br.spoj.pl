#include <stdio.h>
#include <string.h>

int main(){
	int k = 1;
	int n = 0;
	
	char nome[80];
	int problemas = 11;
	
	char aux_nome[80];
	int aux_problemas;
	
	while(scanf("%d", &n) != EOF){
		while (n > 0){
			scanf("%s %d", aux_nome, &aux_problemas);
			if(aux_problemas < problemas){
				problemas = aux_problemas;
				strcpy(nome, aux_nome); //problema
			}
			else if(aux_problemas == problemas){
				if (strcmp(aux_nome, nome) > 0){
					strcpy(nome, aux_nome);
				}
			}
			n--;
		}
		
		
		printf("Instancia %d\n", k);
		printf("%s\n\n", nome);
		k++;
		problemas = 11;
	}
	return 0;
}
