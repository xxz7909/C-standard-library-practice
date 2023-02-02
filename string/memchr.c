#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
						// unsigned char
	char string[] = "Find the first occurence of a character and return \
			 a pointer to it.";
	char* o = memchr(string,'o', strlen(string));
	printf("%ld\n", o-string+1);
	
	return 0;
}
