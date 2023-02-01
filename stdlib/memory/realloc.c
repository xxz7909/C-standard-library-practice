#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	int* ptr = NULL;
	ptr = (int*)realloc(ptr, 128); // equivalent to malloc()
	for(int i = 0; i < 128/4; ++i) {
		ptr[i] = 100;
		printf("%d ",ptr[i]);
	}
	putchar('\n');
	int *ptr2  = (int*)realloc(ptr, 640);	//取新空间和旧空间的最小值保持不变，如果重分配更大的空间，新多出来的不会默认置0
// 重分配64 首地址没变， 重分配640 挪到新的地址了	
//	free(ptr);
	free(ptr2); //double free. Aborted.
//
//	If the area pointed to was moved, a free(ptr) is done
//	也就是说就算内存移动了，咱也不用free原来的地址了
//	感觉还用原来的指针接收就行
	return 0;
}
