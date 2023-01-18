#include <stdio.h>
#include <float.h>


int main(int argc, const char* argv[])
{
	// 尾数
	printf("%d\n", FLT_MANT_DIG);
	printf("%d\n", DBL_MANT_DIG);
	printf("%d\n", LDBL_MANT_DIG);

	return 0;
}
