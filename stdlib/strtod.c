#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	char *p;
	double num = strtod("1.5e9 people", &p);
	printf("%lf \n ", num );
	printf("%s\n", p);
	printf("%lf\n", strtod("avsda",&p)); //zero value (0.0) is returned
	return 0;
}
