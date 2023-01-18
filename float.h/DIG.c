#include <stdio.h>
#include <float.h>

void print(int vaule)
{
	printf("%d\n", vaule);	
}

// float point literals are all have default type double
int main(int argc, const char* argv[])
{
	// 进位之后10进制值不变的最大位数
	// 也就是最多支持保留到多少位
	print(FLT_DIG); //6
	print(DBL_DIG); //15
	print(LDBL_DIG); //18
	
	float a = 1.1;
	double b = 1.1;
	long double c = 1.1;
	printf("%.23lf\n", 1.1);
	printf("%.23lf\n", a);
	printf("%.23lf\n", b);
	printf("%.23Lf\n", c);
	return 0;
}
