#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, const char* argv[])
{
	printf("rand_max is %d\n", RAND_MAX);

	srand((unsigned)time(NULL));
	while(true) {
		if(rand() == RAND_MAX) {
			printf("rand_max is %d\n", RAND_MAX);
			break;
		}

	}
	// the maxminum value of rand() could returned.
		return 0;
}
