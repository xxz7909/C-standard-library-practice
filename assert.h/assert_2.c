#include <stdio.h>
#include <assert.h>

int main(int argc, const char* argv[])
{
	int a;
	scanf("%d",&a);
	assert(a >= 0);
	printf("a = %d\n",a);
	
	return 0;
}
