#include <stdio.h>

int main()
{
	long nc, nw, nl;
	nc = nw = nl = 0;
	int c;
	int in_a_word = 0;
	while ((c = getchar()) != EOF)
	{
		nc++;
		if (c == ' ' || c == '\t')
			in_a_word = 0;
		else if (c == '\n'){
			nl++;
			in_a_word = 0;
		}
		else {
			if (!in_a_word) {
				nw++;
				in_a_word = 1;
			}
		}
		
	}
	printf("no of chars -> %ld\tno of words -> %ld\tno of lines -> %ld\n", nc, nw, nl);
}
