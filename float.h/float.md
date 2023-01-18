#  NaN : not a number
一个安静的 NaN 可以传递几乎每一位算数运算而不会引发浮点异常

QNAN（Quiet NAN）和SNAN（Singaling NAN）。QNAN与SNAN的不同之处在于，QNAN的尾数部分最高位定义为1，SNAN最高位定义为0；QNAN一般表示未定义的算术运算结果，最常见的莫过于除0运算；SNAN一般被用于标记未初始化的值，以此来捕获异常。

# FLT_ROUNDS  rounding mode 进位模式
-1 indeterminable
0  toward zero 
1  to nearest
2  toward positive infinity
3  toward negative infinity

# FLT_RADIX : base radix representation of the exponent

