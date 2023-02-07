#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char str[20] = "helloworld";
	char string[20] = "Helloworld";
	if( strcmp(str,string) > 0)
		printf("str > string %d\n", strcmp(str,string));

	return 0;
}
