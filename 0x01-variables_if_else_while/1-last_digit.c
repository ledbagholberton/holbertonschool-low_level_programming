#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int last;
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("The string Last digit of %d is %d ", n, last);
	if (last > 5)
		printf ("and is greater than 5 \n");
	else
	{
		if (last == 0) 
			printf ("and is 0 \n");
		else 
			printf ("and is less than 6 and not 0 \n"); 
	}
	/* your code goes there */
	return (0);
}
