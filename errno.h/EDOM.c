#include <stdio.h>
#include <math.h>
#include <errno.h>

int main(int argc, const char* argv[])
{// 定义域错误
	printf("errno =%d\tEDOM = %d\n",errno, EDOM); 
	sqrt(-1.0);	
	printf("errno =%d\tEDOM = %d\n",errno, EDOM); 
	
	return 0;
}
