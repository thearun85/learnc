#include <stdio.h>
#define MAX_LENGTH 1000
int readline(char line[], int lim);

int main(){
	int len;
	char line[MAX_LENGTH];
	while ((len = readline(line, MAX_LENGTH)) > 0) {
		if (len > 80)
			printf("line is %s", line);
	}
}

int readline(char line[], int lim) {
	int c, i;
	for(i=0; i<lim-1 && ((c = getchar()) != EOF && c != '\n'); i++)
		line[i] = c;
	if (c == '\n'){
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}
