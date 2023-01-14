#include <stdio.h>
#include <limits.h>

int main(int argc, const char* argv[])
{
	for (int i=0; i< UCHAR_MAX; i++) {
		putchar(i);
	}
	return 0;
}
