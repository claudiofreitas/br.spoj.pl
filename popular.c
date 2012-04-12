#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	int* votos;
	int i = 0;
	int j = 0;
	int aux;
	
	while(scanf("%d", &n) != EOF){
		if (n == 0) return 0;
		votos = malloc(n*sizeof(int));
		for(i = 0; i < n; i++){
			for (j = 0; j < n; j++){
				scanf("%d", &aux);
				votos[j] += aux;
			}
		}
		printf("%d\n", conta_max(votos, n));
	}
}

int conta_max(int* votos, int n){
	int max = 0;
	int i = 0;
	for(i = 0; i < n; i++){
		if (votos[i] > max){
			max = votos[i];
		}
	}
	return max;
}
