#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	// 如果要获取的环境变量不存在就返回NULL
	printf("%s\n", getenv("USER"));
	return 0;
}
