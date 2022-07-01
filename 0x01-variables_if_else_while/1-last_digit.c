#include <stdlib.h>
#include <time.h>
#include <studio.h>
/**
 * main -> assign a random number to the varuable n each time it and print out
 * based a condition
 * Return : always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is posetive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
{
	 printf("%d is negative\n", n);
}
return (0);
}
