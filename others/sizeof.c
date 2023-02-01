#include <stdio.h>

int main(int argc, const char* argv[])
{
	printf("%lu\n", sizeof("a"));
	printf("%lu\n", sizeof('a'));
	char a = 'a';
	printf("%lu\n", sizeof(a));

	return 0;
}
