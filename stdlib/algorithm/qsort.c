#include <stdio.h>
#include <stdlib.h>

extern int cmp(const void *a, const void *b);
//int cmp(const void *a, const void *b)
//{
//	return *(int*)a - *(int*)b;
//}

int main(int argc, const char* argv[])
{
	int arr[10] = {10 ,9 ,8,5,33,1,3};	
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');

	qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp);

	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); ++i)
	{
		printf("%d ", arr[i]);
	}
	putchar('\n');

	return 0;
}
