#include <stdio.h>
#define MAX_LENGTH 1000

int readline(char line[], int lim);
void copy(char to[], char from[]);

int main() {
	char line[MAX_LENGTH];
	char longest[MAX_LENGTH];
	int len, max;
	max = 0;
	while ((len = readline(line, MAX_LENGTH)) > 0){
		if (len > max){
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("longest line is \n%s", longest);
}

int readline(char line[], int lim) {
	int i, c;
	for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i]=from[i]) != '\0')
		i++;
}
