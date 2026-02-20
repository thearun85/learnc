#include <stdio.h>

int main()
{	
	int c;
	long nc, nl;
	nc = 0, nl = 0;
	while ((c = getchar()) != EOF)
	{
		nc++;
		if (c == '\n')
			nl++;
	}
	printf("no of chars -> %ld\tno of lines -> %ld\n", nc, nl);
}
