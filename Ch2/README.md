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

* EX2_7

(a) who goes with Fergus?(new line) string

(b) 31.4 long double //用e表示的科学计数法，3.14e1 = 3.14 * 10, 3.14e2 = 3.14 * 100, 3.14e-1 = 0.314;

(c) 1024 float

(d) 3.14 long double

* EX2_9

(a) std::cin >> int input_value;

wrong. Initialized should be executed firstly.

int input_value = 0;//是否声明初始值都可以

std::cin >> input_value;

(b) int i = {3.14};

wrong, 3.14 is a double type.

double i = {3.14};

(c) double salary = wage = 9999.99;

wrong. the wage is not be declared.

double salary = 9999.99, wage = 9999.99;

(d) int i = 3.14;

can be executed, but i will be 3（be truncated).

double i = 3.14;

* EX2_10

确认初始值

    std::string global_str; //初始值是null string

    int global_int; // global_int = 0

    int main()
    {
	    int local_int; // undefined val;ue
	    std::string local_int; // NULL string
    }

* EX2_15

(1) int ival = 1.01; // valid, but will be truncated to 1

(2) int &rval1 = 1.01; // rval1 is a reference, the initialized reference should be attached to an object, not a integer or number.

(3)int &rval2 = ival; //legel

(4)int &rval3;//the reference must refer to an object

* EX2_16


	    int i = 0, &r1 = i;
	    double d = 0, &r2 = d;
	    (a) r2 = 3.14159;//legel, r2 = d =3.14156
	    (b) r2 = r1;//legel, will happen automatic convert
	    (c) i = r2; //legel, will be truncated
	    (d) r1 = d;//legel, will be truncated
	    
注意区分是否合法（可编译）和是否能得到所想要的值

* Ex2_19

指针指向了对象的地址，可以指向不同对象，对象的值也可以改变

引用是指为一个变量起了一个别名，后面所有的行动都会随着该变量的变化而变化
    
   




	