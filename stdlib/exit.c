#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	exit(1);
	exit(EXIT_FAILURE);
	
	// 终止当前进程，关闭所有相关的文件描述符，向父进程发送信号
	exit(0);
	exit(EXIT_SUCCESS);
	return 0;
}
