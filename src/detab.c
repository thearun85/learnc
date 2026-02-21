#include <stdio.h>
#define TAB_STOP 4

int main()
{
	int c, nc = 0, no_of_spaces = 0, k;
	while ((c = getchar()) != EOF) {
		
		if (c != '\n') {
			if (c!= '\t'){
				printf("%c", c);
				nc++;
			} else {
				no_of_spaces = TAB_STOP - (nc%TAB_STOP);
				for (k=1; k<=no_of_spaces; k++){
					printf("%c", ' ');
				}
				nc = nc+no_of_spaces;
			}
		} else {
			printf("\n");
			nc = 0;
		}
	}
}


