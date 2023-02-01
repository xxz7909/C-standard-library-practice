#include <stdio.h>

typedef struct {
	int quotient;	
	int remainder;	
}div_t;

int main(int argc, const char* argv[])
{
	int a,b;
	a = 13;
	b = 5;
	div_t rst;
	rst.quotient = (int)a/b;
	rst.remainder = a - rst.quotient* b ;

	printf("the quotient is %d\n", rst.quotient);
	printf("the remainder is %d\n", rst.remainder);

	return 0;
}
