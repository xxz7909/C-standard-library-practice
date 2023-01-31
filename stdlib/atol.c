#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	printf("%ld\n", atol("2147483648abc"));
	return 0;
}
