#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - should retirn the value of n and print it
 *
 * Return: return should be (0) to imply success
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d, is positive\n", n);
	else if(n == 0)
		printf("%d, is zero\n", n);
		else if (n < 0)
		printf("%d, is negative\n", n);
return (0);
}
