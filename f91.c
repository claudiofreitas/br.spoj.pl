#include <stdio.h>

int f91(int N){
	if (N <= 100){
		return f91(f91( N + 11 ));
	}
	else if (N >= 101) {
		return N - 10;
	}
}

int main(){
	int N = 0;
	while (scanf("%d", &N) != 0){
		if (N == 0) return 0;
		printf("f91(%d) = %d\n", N, f91(N));
	}
}
