#include <stdio.h>
#include <libio.h>

extern struct _IO_FILE_plus _IO_2_1_stdin_; 

int main(int argc, const char* argv[])
{
	printf("%p \n", &_IO_2_1_stdin_);
	return 0;
}
