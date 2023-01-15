#include <stdio.h>
#include <errno.h>
#include <wchar.h>

// 这个东西的代码到处找找不到，参考资料里都是只有描述
// 说这个 东西是 非法字节序列的错误代码
int main(int argc, const char* argv[])
{
	// EILSEQ is in C95
	// illegal byte sequence	
	errno = 0;
	int a = 'avc';
	printf("%d \t %d \n", errno, EILSEQ);
	return 0;
}
