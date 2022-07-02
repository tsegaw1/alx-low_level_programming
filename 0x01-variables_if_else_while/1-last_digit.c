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
{
	printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
}
if (n == 0)
{
       printf("Last digit of %d is 0 and is 0\n",
                      n);
}
if (n < 0)
{
	 printf("Last digit of %d is %d and is less than 6 and not 0\n",
			 n, n % 10);
}
return (0);
}
