#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	int ascii = 0x0;
	for(;ascii <= 0x7f; ascii++) {
		int ret = iscntrl(ascii);
		if(ascii == 0x0 || ascii == 0x20) {
			printf("ret%d is %d\n",ascii,ret);
		}
		if(ret)
			printf("ascii code %d %#x %c is control character\n",\
					ascii,ascii,ascii);
		else
			printf("ascii code %d %#x %c is not control character\n",\
					ascii,ascii,ascii);

	}

	return 0;
}
