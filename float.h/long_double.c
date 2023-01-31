#include <stdio.h>

int main(int argc, const char* argv[])
{
#define 	__LONG_DOUBLE_USES_FLOAT128 1
	printf("%Lf\n", (long double) 1.1);
	return 0;
}
