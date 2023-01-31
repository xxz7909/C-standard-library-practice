#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char* argv[])
{
	printf("sizeof div_t : %zi \n", sizeof (div_t));
	printf("sizeof ldiv_t : %zi \n", sizeof (ldiv_t));
	
	return EXIT_FAILURE;
}
//   typedef struct
//     {
//       int quot;			/* Quotient.  */
//       int rem;			/* Remainder.  */
//     } div_t;
//   
//   /* Returned by `ldiv'.  */
//   #ifndef __ldiv_t_defined
//   typedef struct
//     {
//       long int quot;		/* Quotient.  */
//       long int rem;		/* Remainder.  */
//     } ldiv_t;
