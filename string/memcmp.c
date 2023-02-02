#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char string[] = "Test string";
	char str2[] = "test";
	int ret = memcmp(string, str2, sizeof(str2) );
	printf("%d\n", ret);

	return 0;
}
