#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	// 在a中检索第一个在b中出现的 字符偏移量
	char str[50];
	strcpy(str, "helloworld");
	size_t pos = strcspn(str, "jkl");
	printf("%zi\n", pos);
	// return offset based on the head address of string1
	// return the length of initial segment of string1 which consists entirely of characters are not in string2 返回不包含string2内容的字串的长度
	//在str1中 查找str2字符集合 只要有一个出现就返回
	return 0;
}
