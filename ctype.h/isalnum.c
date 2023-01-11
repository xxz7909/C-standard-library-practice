#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	// checks whether the passed character is alphanumeric- adj.文字数字的，包括文字与数字的
	// 盲猜就是判断传入的int character是不是字母或者数字
	printf("%d\n",isalnum('A'));
	return 0;
}
