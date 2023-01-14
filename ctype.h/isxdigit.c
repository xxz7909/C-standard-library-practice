#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(int argc, const char* argv[])
{
	for(unsigned char i = 0; i < UCHAR_MAX; ++i) {
		if(isxdigit(i))
			printf("%c",i);
		// 0123456789ABCDEFabcdef
	}
	putchar('\n');
	for(unsigned char i = 0; i < UCHAR_MAX; ++i) {
		printf("%c %#x %d : %d\n",i,i,i,isxdigit(i));
	}
	return 0;
}
