#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char* argv[])
{
	div_t rst;
	printf("13 / 5\n");	
	rst = div(13 , 5);
	printf("the quotient is %d\n", rst.quot);
	printf("the remainder is %d\n", rst.rem);


	ldiv_t ans;
	printf("9223372036854775807 / 23 \n");
	//ans = ldiv(pow(2,63)-1, 23);
	ans = ldiv(9223372036854775807 , 23);
	printf("the quotient is %ld\n", ans.quot);
	printf("the remainder is %ld\n", ans.rem);

	return 0;
}
