#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
// a punctuation character that is any graphic character that is not alphanumeric
// graphic character 去掉字母和数字
// 其实就是所有的特殊符号
	int ascii = 0x0;
	for(;ascii <= 0x7f; ascii++) {
		int ret = ispunct(ascii);
		if(ascii == 0x21 || ascii == 0x20) {
			printf("ret%d is %d\n",ascii,ret);
		}
		if(ret)
			printf("ascii code %d %#x %c is a punctuation character\n",\
					ascii,ascii,ascii);
		else
			printf("ascii code %d %#x %c is not a punctuation character\n",\
					ascii,ascii,ascii);

	}

	return 0;
}
