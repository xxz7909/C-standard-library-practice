#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	// checks whether the passed character is alphanumeric- adj.文字数字的，包括文字与数字的
	// 盲猜就是判断传入的int character是不是字母或者数字
	// 如果是字母或数字返回非0值，如果不是则返回0
	// ascii 0-31和127是控制字符  32-126是可打印字符
	int ascii = 0x0;
	for(;ascii <= 0x7f; ascii++) {
		int ret = isalnum(ascii);
		printf("ret%d is %d\n",ascii,ret);
		if(ret)
			printf("ascii code %d %#x %c is alphanumeric\n",\
					ascii,ascii,ascii);
		else
			printf("ascii code %d %#x %c is not alphanumeric\n",\
					ascii,ascii,ascii);

	}

	return 0;
}
