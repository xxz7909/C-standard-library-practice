#include <stdio.h>
#include <float.h>

// tmd一堆宏 然后是缩写，有时间再研究什么意思
// FLT_MAX FLT_MIN这种倒是挺实用
int main(int argc, const char* argv[])
{
	printf("The radix of exponent:%d\n", FLT_RADIX);
	printf("float point rounding mode:%d\n",FLT_ROUNDS);

	return 0;
}
