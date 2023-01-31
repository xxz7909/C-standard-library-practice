#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	// converting string to a float-point number
	// double atof(const char* str);
	double a = atof("1.234567");
	printf("%lf\n", a);

	printf("%lf\n", atof("2.34567"));

	return 0;
}
