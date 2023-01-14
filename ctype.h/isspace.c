#include <stdio.h>
#include <ctype.h>

int isWhiteSpace(int c)
{
	int white_space[6] = { 9, 10, 11, 12, 13, 32};
	int i=0;
	for(char i = 0; i< sizeof(white_space)/sizeof(white_space[0]); ++i) {
		if( white_space[i] == c)
			return 1;
	}
	return 0;
}

int main(int argc, const char* argv[])
{
	//checks whether the passed character is white-space character
	//white-space character: 0x20 ' '
	// 			 0x09 '\t' horizontal tab(TAB)
	// 			 0x0a '\n' newline (LF)
	// 			 0x0b '\v' vertical tabl (VT)
	// 			 0x0c '\f' feed(FF)
	// 			 0x0d '\r' carriage return(CR) 回车
	
	for( int ascii = 0x0;ascii <= 0x7f; ascii++ ) {
		int ret = isspace(ascii);
		printf("ret%d is %d\n",ascii,ret);
		if(ret)
			printf("ascii code %d %#x %c is a white-space character\n",\
					ascii,ascii,ascii);
		else
			printf("ascii code %d %#x %c is not a white-space character\n",\
					ascii,ascii,ascii);

	}
	int a = 0xd;
	printf("%d\n",isWhiteSpace(a));

	return 0;
}
