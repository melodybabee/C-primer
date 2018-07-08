# 第二章的笔记及练习
* EX2_1

short and int is at least 16 bits, long at least 32 bits, long long at least 64 bits.

int为整数型，表示的数字范围是32bits。

long为整数型，表示的数字范围是32bits。

long long为整数型，表示的数字范围是64bits。

short为整数型，表示的数字范围是16bits。

无符号类型默认都为正，而有符号的为正负均分。

float为单浮点数，表示为32bits。

double为双浮点数，表示为64bits,精度更高。

* EX2_2

Use double is better.

* EX2_5

(a) 

'a' //char ;

L'a' // 宽字符型 wchar_t; wide character literal

"a" //string;

L"a" // wstring_t;

(b)

10 //十进制数 decimal

10u // unsigned decimal

10L // long

10uL // unsigned long

012 // 八进制数 octal

0xC // 十六进制数 hexadecimal

(c)

3.14 //double双精度浮点数

3.14f // float

3.14L // long double

(d)

10 //decimal

10u // unsigned decimal

10.//double 

10e-2 // double,e表示指数部分

* EX2_6

不一样. int month = 9, this is decimal, but int month = 09, this is the form of octal. the octal does not have the number 9, so it is wrong.

* Ex2_7

(a) who goes with Fergus?(new line) string

(b) 31.4 long double //用e表示的科学计数法，3.14e1 = 3.14 * 10, 3.14e2 = 3.14 * 100, 3.14e-1 = 0.314;

(c) 1024 float

(d) 3.14 long double



	