#include <stdio.h>
#include <ctype.h>

int main(int argc, const char* argv[])
{
	printf("\\t : %d\n",isupper('\t'));
	char number = '0';
	char lowerletter = 'a';
	char upperletter = 'A';
	for(;number <= '9'; number++) {
		printf("%c : %d\n",number,isupper(number));
	}
	for(; lowerletter <= 'z'; lowerletter++) {
		printf("%c : %d\n", lowerletter, isupper(lowerletter));
	}
	for(; upperletter <= 'Z'; upperletter++) {
		printf("%c : %d\n", upperletter, isupper(upperletter));
	}
	
	return 0;
}
