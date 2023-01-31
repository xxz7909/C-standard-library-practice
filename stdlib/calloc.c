#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	// 在heap中分配items*size字节大小的连续内存，返回其首地址，并将内存置0
	int* a = calloc(8 , 4);
	

	free(a);
	return 0;
}
