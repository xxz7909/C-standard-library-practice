#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	printf("\\t : %d\n",islower('\t'));
	char number = '0';
	char lowerletter = 'a';
	char upperletter = 'A';
	for(;number <= '9'; number++) {
		printf("%c : %d\n",number,islower(number));
	}
	for(; lowerletter <= 'z'; lowerletter++) {
		printf("%c : %d\n", lowerletter, islower(lowerletter));
	}
	for(; upperletter <= 'Z'; upperletter++) {
		printf("%c : %d\n", upperletter, islower(upperletter));
	}
	
	return 0;
}
