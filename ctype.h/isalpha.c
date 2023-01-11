#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	int var[4] = {'2', 'a', '\t', ' '};
	for(char i = 0; i <4; ++i) {
		printf("%c : %d\n",var[i],isalpha(var[i]));
	}

	return 0;
}
