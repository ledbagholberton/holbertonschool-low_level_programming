#include <stdio.h>
int main () 
{
	char letter;
	for(letter = 'a' ; letter <= 'z' ; letter++)
	{
	putchar(letter);
	}
	letter = '\n';
	putchar(letter);
	return(0);
}
