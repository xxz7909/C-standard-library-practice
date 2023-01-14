#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	printf("%c toupper : %c\n",'a',toupper('a'));
	printf("%c toupper: %c\n",'A',toupper('A'));
	printf("%c tolower: %c\n",'a',toupper('a'));
	printf("%c tolower: %c\n",'A',toupper('A'));

	return 0;
}
