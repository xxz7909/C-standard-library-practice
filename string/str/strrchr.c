#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char str[50];	
	strcpy(str, "hello world");
	// the second parameter 'int ___c' is factually as unsigned char 
	// string reverse character
	char* ptr = strrchr(str ,'d');
	printf("%c\n", *ptr);
	return 0;
}
