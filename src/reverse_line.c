#include <stdio.h>
#define MAX_LENGTH 1000

int readline(char line[], int lim);
void reverse(char to[], char from[], int index);

int main() {
	int len;
	char line[MAX_LENGTH];
	char reversed[MAX_LENGTH];
	while ((len = readline(line, MAX_LENGTH)) > 0){
		reverse(reversed, line, len);
		printf("reversed line is %s\n", reversed);
	}
}

int readline(char line[], int lim) {
	int c, i;
	for (i=0; i<lim && ((c = getchar()) != EOF && c != '\n'); i++)
		line[i] = c;
	if (c == '\n'){
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void reverse(char to[], char from[], int index) {
	int r;
	for (r=0, index=index-1; index >= 0; index--, r++){
		to[r] = from[index];
	}
	to[r] = '\0';
}
