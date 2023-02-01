#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	printf("abs(-2147483648)=%lu\n", abs(-2147483648)); // 绝对值之后上溢了1，又变成原来的数了
	printf("abs(-2147483649)=%lu\n", abs(-2147483649));
                                
	printf("abs(-2147483647)=%lu\n", abs(-2147483647));
	printf("labs(-2147483649)=%lu\n", labs(-2147483649));
                                
	printf("labs(-2147483649)=%lu\n", labs(-2147483649));
	return 0;
}
