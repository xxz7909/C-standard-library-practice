#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	char str[50];	
	strcpy(str, "te=st@xixi.com");
	char search_keys[] = "?!,$%:;&/()=";

	size_t pos = strcspn(str, search_keys);
	if(pos) {
		printf("is not an valid e-mail address \n\
found incorrect char at index:%zi\n",pos);
	} else {
		printf("valid e-mail\n");
	}


	return 0;
}
