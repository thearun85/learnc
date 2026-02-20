#include <stdio.h>
#define YES 1
#define NO 0
int main()
{
	int c;
	int print_word = NO;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ' && c != '\t' && c != '\n'){
			putchar(c);
			print_word = YES;			
		}
		else if (print_word) {
			putchar('\n');
			print_word = NO;
		}
	}
}
