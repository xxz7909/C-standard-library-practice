#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>

void foo()
{
	printf("Register a function to be called on exit() invocation\n");
	printf("注册一个函数，让这个函数在程序结束时调用，这个函数必须是无返回值，无参数的函数\n");
}

void bar()
{
	printf("666后注册的先执行.\n");
}

int main(int argc, const char* argv[])
{
	atexit(foo);
	atexit(bar);

	printf("Hello world!\n");
	return 0;
}
