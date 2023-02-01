#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b ;
}

#define arrlen(x) sizeof(x)/sizeof(x[0])

//int main(int argc, const char* argv[])
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };	
//	int key = 5;
//
//	int* rst = bsearch(&key, arr, arrlen(arr), sizeof(arr[0]),cmp); 
//	printf("%d\n",*rst);
//
//	return 0;
//}
