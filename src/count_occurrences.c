#include <stdio.h>

int main()
{
	int ndigits[10], nwhite, nother;
	int c, i;
	nwhite = nother = 0;
	for (i=0; i< 10; i++)
		ndigits[i] = 0;

	while ((c = getchar()) != EOF) {
		if ( c >= '0' && c <= '9')
			ndigits[c - '0']++;
		else if (c == ' ' || c == '\t' || c == '\n')
			nwhite++;
		else
			nother++;
	}
	printf("digits -> ");
	for (i=0; i<10; i++)
		printf("%d\t", ndigits[i]);
	printf("nother -> %d, nwhite -> %d\n", nother, nwhite);
}
