#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	// converting a string to an integer
	// int atoi(const char* str);
	printf("%d\n", atoi("1.234"));
	printf("%d\n", atoi("123asdf"));

	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("2147483648"));
	printf("%d\n", atoi("asdf"));

	return 0;
}
