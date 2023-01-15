#include <stdio.h>
#include <errno.h>

#define p printf

int main(int argc, const char* argv[])
{
	p("EDOM = %d\n",EDOM);
	p("EILSEQ = %d\n",EILSEQ);
	p("ERANGE = %d\n",ERANGE);

	return 0;
}
