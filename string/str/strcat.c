#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char str[50];
	strcpy(str,"111 ");
	puts(str);

	// dst is a C-style string
	strcat(str,"这是追加的内容");
	puts(str);
	return 0;
}
