# 1 "assert.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "assert.c"
# 1 "/usr/include/assert.h" 1 3 4
# 35 "/usr/include/assert.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 36 "/usr/include/assert.h" 2 3 4
# 66 "/usr/include/assert.h" 3 4




# 69 "/usr/include/assert.h" 3 4
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 2 "assert.c" 2


# 3 "assert.c"
int main(int argc, const char* argv[])
{
 
# 5 "assert.c" 3 4
((void) sizeof ((
# 5 "assert.c"
1 == 1
# 5 "assert.c" 3 4
) ? 1 : 0), __extension__ ({ if (
# 5 "assert.c"
1 == 1
# 5 "assert.c" 3 4
) ; else __assert_fail (
# 5 "assert.c"
"1 == 1"
# 5 "assert.c" 3 4
, "assert.c", 5, __extension__ __PRETTY_FUNCTION__); }))
# 5 "assert.c"
              ;
 
# 6 "assert.c" 3 4
((void) sizeof ((
# 6 "assert.c"
1 == 0
# 6 "assert.c" 3 4
) ? 1 : 0), __extension__ ({ if (
# 6 "assert.c"
1 == 0
# 6 "assert.c" 3 4
) ; else __assert_fail (
# 6 "assert.c"
"1 == 0"
# 6 "assert.c" 3 4
, "assert.c", 6, __extension__ __PRETTY_FUNCTION__); }))
# 6 "assert.c"
              ;
 return 0;
}
