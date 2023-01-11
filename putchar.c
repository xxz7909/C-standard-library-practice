#include <stdio.h>

int main(void)
{
	int i = 0;
	char str[] = "hello world";
	while(str[i]) {
		//putchar(str[i++]);
		i++;
	}
	putchar('\0');

}
