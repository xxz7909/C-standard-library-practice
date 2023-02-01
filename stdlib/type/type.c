#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	printf("size_t : 这个平台上是unsigned int\n sizeof: ", sizeof(size_t));

	printf("sizeof(wchar_t) : %zi\n", sizeof(wchar_t));
	return 0;
}
