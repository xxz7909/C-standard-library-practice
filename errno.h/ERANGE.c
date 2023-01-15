#include <stdio.h>
#include <math.h>
#include <errno.h>

int main(int argc, const char* argv[])
{
	printf("errno=%d \t ERANGE=%d \n", errno, ERANGE);	
	log(0.0);
	printf("errno=%d \t ERANGE=%d \n", errno, ERANGE);	

	return 0;
}
