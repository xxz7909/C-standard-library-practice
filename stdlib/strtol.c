#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	unsigned char base = 2;
	// 2-32
	
	printf("%ld\n",strtol("100",NULL,0));//十进制	
	for(;base <= 32; base++) {
		printf("%ld\n",strtol("100",NULL,base));	
	}
	char *str = "没有赋值上去";
	long num = strtol("123abcdefg", &str, 10);
	printf("%ld \n\n", num );
	printf("%s\n", str);

	return 0;
}
