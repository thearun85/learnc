#include <stdio.h>
#define MAX_WORDS 100
int main()
{
	int max_length, word_length, ncount[MAX_WORDS];
	int c, i;
	max_length = word_length = 0;
	for (i=0; i<MAX_WORDS; i++)
		ncount[i] = 0;
		
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (word_length > max_length)
				max_length = word_length;
			if (word_length > 0)
				ncount[word_length]++;
			word_length = 0;
		} else {
			word_length++;
		}
	}
	if (word_length > 0)
		ncount[word_length]++;
	if (word_length > max_length)
		max_length = word_length;

	int k;
	for (i=1; i<=max_length;i++){
		if (ncount[i] > 0) {
			printf("%2d\t|", i);
			
			for (k=0; k<ncount[i]; k++)
				printf("*");
			printf("\n");
		}
	}
}
