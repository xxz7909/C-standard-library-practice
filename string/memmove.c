#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	// 如果dst和src有重叠，保证dst被 正确 的修改
	// 如果没有重叠，跟memcpy相同
	char str1[] = "ababcd";
	char* str2 = str1+2;
	printf("memcpy:\n");
	memcpy(str1, str2,sizeof(str1)-2-1);
	printf("str1: %s\n",str1);
	printf("str2: %s\n", str2);

	printf("%zi\n", sizeof(str1) -2-1);

	printf("memmove: \n");
	char str3[] = "ababcd";
	char* str4 = str3+2;
	memmove(str3,str4, sizeof(str3)-1-2);
	printf("str3 :%s\n", str3);
	printf("str4 :%s\n", str4);


	return 0;
}
