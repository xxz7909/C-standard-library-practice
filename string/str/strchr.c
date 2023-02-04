#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	// 字符串搜索
	
	// 在str里，搜索第一次出现ch的位置
	// ch以int传入，但实际上用作unsigned char	
	// 返回地址
	char str[50];
	strcpy(str,"hello,");
	printf("%c\n", *(strchr(str,'l')));	
	printf("%p\n", strchr(str, 'l'));
	if(*strchr(str,'l') == 'l')
		printf("%d\n", 1);

	printf("%d\n",strchr(str,'l') - str);
	return 0;
}
