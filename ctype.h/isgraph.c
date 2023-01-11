#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
// all characters that can be printed except for whitespace characters like ' '
	int ascii = 0x0;
	for(;ascii <= 0x7f; ascii++) {
		int ret = isgraph(ascii);
		printf("ret%d is %d\n",ascii,ret);
		if(ret)
			printf("ascii code %d %#x %c is character with graphical representations\n",\
					ascii,ascii,ascii);
		else
			printf("ascii code %d %#x %c is not character with graphical representations\n",\
					ascii,ascii,ascii);

	}

	return 0;
}
