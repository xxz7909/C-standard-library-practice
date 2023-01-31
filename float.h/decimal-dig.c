#include <stdio.h>
#include <float.h>

void print(char str[100], int vaule) 
{
	printf("%s : %d\n", str, vaule);	
}

int main(int argc, const char* argv[])
{
	print("FLT_DECIMAL_DIG",FLT_DECIMAL_DIG);


	return 0;
}
