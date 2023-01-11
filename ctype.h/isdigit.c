#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	printf("%d\n",isdigit('2'));
	printf("%d\n",isdigit('a'));
	printf("%d\n",isdigit('\t'));
	printf("%d\n",isdigit(' '));
	
	return 0;
}
