#include <stdio.h>
#include <string.h>

int char_to_number(char c);


int main (int args[]){
	char str[31];
	while(scanf("%s", str) != EOF){
		int i = 0;
		int len = strlen(str);
		for (i = 0; i < len; i++){
			if ('A' <= str[i] && str[i] <= 'Z') {
				printf("%c", char_to_number(str[i]));
			}
			else printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}

int char_to_number(char c){
	if (c == 'A' || c == 'B' || c == 'C') return '2';
	else if (c == 'D' || c == 'E' || c == 'F') return '3';
	else if (c == 'G' || c == 'H' || c == 'I') return '4';
	else if (c == 'J' || c == 'K' || c == 'L') return '5';
	else if (c == 'M' || c == 'N' || c == 'O') return '6';
	else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S') return '7';
	else if (c == 'T' || c == 'U' || c == 'V') return '8';
	else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z') return '9';
	else return c;
}
