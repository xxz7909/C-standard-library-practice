#include <stdio.h>
#include <stdlib.h>

void foo(void)
{
	printf("我猜这个函数不会被执行\n");
}

int main(int argc, const char* argv[])
{
	atexit(foo);
	abort(); // 终止当前进程，发送SIGABRT信号而不进行善后工作
	printf("sdfasdf");
	return 0;
}
