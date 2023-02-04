#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	// 传入的字符虽然是int，但是被当成unsigned char
	char str[10];
	printf("%s\n", str);
	memset(str, 'a', sizeof(str)/sizeof(str[0]) -1 );
	printf("%s\n", str);

	return 0;
}
