#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char str[50];
	strcpy(str,"Hello world!");
	puts(str);
	strncat(str,"1234567890",9);
	puts(str);
	return 0;
}
