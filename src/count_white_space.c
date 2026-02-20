#include <stdio.h>

int main()
{
	long nb, nt, nl;
	nb = nt = nl = 0;
	int c;
	while((c = getchar()) != EOF)
	{
		if (c == ' ')
			nb++;
		else if (c == '\t')
			nt++;
		else if (c == '\n')
			nl++;
	}
	printf("no of blanks -> %ld\tno of tabs -> %ld\tno of newlines -> %ld\n", nb, nt, nl);
}
