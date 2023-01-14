#include <stdio.h>
#include <ctype.h>

// isgraph 不包括空格
// isprint 包括空格
int main(int argc, const char* argv[])
{
	int ascii = 0x0;
	for(;ascii <= 0x7f; ascii++) {
		int ret = isprint(ascii);
		if(ascii == 0x0 || ascii == 0x20) {
			printf("ret%d is %d\n",ascii,ret);
		}
		if(ret)
			printf("ascii code %d %#x %c is a printable character\n",\
					ascii,ascii,ascii);
		else
			printf("ascii code %d %#x %c is not a printable character\n",\
					ascii,ascii,ascii);

	}

	return 0;
}
