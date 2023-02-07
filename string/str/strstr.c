#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char string[20] = "helloworld";

	// 在string中搜索指定字符串，返回第一次出现指定字符串的首地址
	char* ptr = strstr(string, "world");
	puts(ptr);
	return 0;
}
