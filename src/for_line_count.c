#include <stdio.h>

int main()
{
	int c;
	long nl;
	for (nl=0; (c=getchar()) != EOF;)
	{
		if (c == '\n')
			nl++;
	}
	printf("no of lines -> %ld\n", nl);
}
