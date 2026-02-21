#include <stdio.h>

int power(int x, int y) {
	int result = 1;
	while (y > 0) {
		result = result * x;
		y--;
	}
	return result;
}
int main()
{
	int j;
	for (j=2; j<10; j++){
		printf("power of %d to 5 is %d\n", j, power(j, 5));
	}
}
