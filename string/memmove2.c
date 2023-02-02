#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "aabbcc";

int main( void )
{
    printf( "The string: %s\n", str1 );
    memcpy( str1 + 2, str1, 4 );
    printf( "New string: %s\n", str1 );

    strcpy(str1,"aabbcc");

    printf( "The string: %s\n", str1 );
    memmove( str1 + 2, str1, 4 );
    printf( "New string: %s\n", str1 );
}
