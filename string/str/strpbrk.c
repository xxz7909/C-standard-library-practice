#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	// strpbrk 返回值类型char*   返回地址
	// strcspn 返回值类型size_t 返回偏移量
	char* search_keys = "abcdfijkl";
	char string[12] = "helloworld";

	char* ptr = strpbrk(string, search_keys);
	puts(ptr);
	printf("%li\n" , ptr-string);
	
	return 0;
}
