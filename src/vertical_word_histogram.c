#include <stdio.h>
#define MAX_WORDS 100
int main()
{
	int c, i;
	int ncount[MAX_WORDS], max_occur, word_length, max_length;
	word_length = max_length = max_occur = 0;
	for (i=0; i<100; i++) {
		ncount[i] = 0;
	}
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (word_length > max_length)
				max_length = word_length;
			if (word_length > 0) {
				ncount[word_length]++;
				if (ncount[word_length] > max_occur)
					max_occur = ncount[word_length];
			}
			word_length = 0;
		} else {
			word_length++;
		}
	}
	if (word_length > max_length)
		max_length = word_length;
	if (word_length > 0) {
		ncount[word_length]++;
		if (ncount[word_length] > max_occur)
			max_occur = ncount[word_length];
	}

	while(max_occur > 0) {
		for (i=1; i<=max_length; i++) {
			if (ncount[i] >= max_occur)
				printf("*  ");
			else
				printf("   ");
		}
		max_occur--;
		printf("\n");
	}
	for (i=1; i<=max_length; i++) {
		printf("%d  ", i);
	} 
	
}
