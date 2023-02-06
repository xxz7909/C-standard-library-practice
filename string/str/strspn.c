#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char string[50];
	strcpy(string, "hellowordld");

	char* filter = "abcdefghijk";

	// 返回第一个不在filter中的地址偏移量
	printf("%lu\n", strspn(string, filter));
	return 0;
}
