#include <stdio.h>
#include <errno.h>
#include <wchar.h>
/*
UTF-8 and UTF-16 and so on, use multiple bytes to represent certain characters. If a program that is using one of these encodings reads a string that contains bytes that are not valid for that encoding, it may generate an "illegal byte sequence" error.

For example, if a program that is using UTF-8 encoding reads a string that contains a byte that is not a valid UTF-8 encoded character, it will raise the error "illegal byte sequence".
*/
int main(int argc, const char* argv[])
{
	// EILSEQ is in C95
	// illegal byte sequence	
	errno = 0;
	return 0;
}
/*
 * It's worth noting that this error may also occur when reading a file or data that was not saved in the expected encoding. It's also common in situations when a program is trying to read or process a file that was created on a different operating system or with different character encoding settings.

To fix this error, you may need to convert the data to the correct character encoding before processing it, or configure the program to use the correct character encoding.

Additionally, it's important to validate the input and check for invalid or unexpected characters, or sanitize the input before processing it.

*/
