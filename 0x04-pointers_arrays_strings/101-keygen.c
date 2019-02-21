#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate  random 4 digits number.
 *
 * Return: Always 0.
 */


int main(void)
{
	int num1, num2, num3, num4;

	srand(time(NULL));
	num1 = rand() % 255;
	num2 = rand() % 255;
	num3 = rand() % 255;
	num4 = rand() % 255;
	printf("%c%c%c%c\n",num1,num2,num3,num4);

return (0);
}

