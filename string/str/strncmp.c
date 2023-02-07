#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[])
{
	const auto char str1[11] = "1234567891";
	const auto char str2[11] = "1234567890";
	if(strncmp(str1, str2, 9) == 0) {
		puts("str1 and str2 are same");
	}

	auto const char str3[33] = "60 is a bad score";
	auto const char str4[33] = "60 is a good score";

	int a = strlen(str3);
	int b = strlen(str4);

	int i = a < b ? a : b;
	for(i; i > 0; --i) {
		if(strncmp(str3, str4, i) == 0) {
			printf("The first %d bytes of str3 and str4 are the same\n", i);
			break;
		}
	}
	
	return 0;
}
