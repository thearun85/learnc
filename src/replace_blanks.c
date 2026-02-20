#include <stdio.h>

int main()
{
	int space = 0;
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t'){
			space = 1;
		} else {
			if (space){
				putchar(' ');
				space = 0;
			}
			putchar(c);
		}
		
	}
}
