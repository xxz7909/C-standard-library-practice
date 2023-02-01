#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
	srand((unsigned)time(NULL));
	short a = rand(); 
	printf("%f\n",*(float*)&a);
	sleep(1);
	return 0;
}
