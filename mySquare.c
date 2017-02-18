#include <stdio.h>
#include <stdlib.h>

int square (int a)
{
	return a*a;

}
int main ()
{ int m=21;
printf ("this is my first program in C\n");
	printf( "the square of %d is %d\n", m, square (m));
	printf ("the square of 5 is %d\n", square (5));
}

