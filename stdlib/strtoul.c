#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	// converting string to unsigned long
	char *str;
	unsigned long num = strtoul("123456789abc", &str, 10);
	printf("%lu\n",num);	
	puts(str);	

	return 0;
}
