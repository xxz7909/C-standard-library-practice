#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char *str = (char*) malloc(15);
	strcpy(str,"123456");	
	printf("%s \n %p\n",str,str);

	str = (char*) realloc(str, 25);
	strcpy(str,"只是一串汉字");	
	printf("%s \n %p\n",str,str);

	free(str);

	return 0;
}
