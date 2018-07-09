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

指针指向了对象的地址，可以指向不同对象，对象的值也可以改变,在声明的时候可以没有初始值

引用是指为一个变量起了一个别名，后面所有的行动都会随着该变量的变化而变化，声明的时候必须有初始值

* Ex2_22

p是一个int型的指针

if(p)//如果p指向的是一个有效地址，为ture, 否则为false

if（*p)//如果p指向的对象的值存在，为true,否则为false

* EX2_23

定义指针p, p指向合法的对象有三种情况：

（1）指向某个有值的对象地址

（2）指向一个空地址

（3）p -> next;指向对象多占空间的下一个地址

其余均为非法地址，思路可以判断指针的指向是否为空，指向的对象的值是否为空。

但是仍不能完全判断出该指针是否合法，还需要判断更多信息，因此无法确定。

* EX2_24

因为void可以表示任何类型，而int和long的类型不同，不能用指针指向类型不同的值的地址。

* EX2_25

(a) int* ip,i, &r = i;//ip is a point of int type, i is int, r is a reference which refers to i.

(b) int i, *ip = 0; // i is int, ip is a NULL pointer of int type.

(c) int* ip, ip2;// ip a pointer to int, ip2 is an int.

* EX2_26

        const int buf;//illegel, const must be initialized
		 int cnt = 0;//legel
		 const int sz = cnt;//legel
		 ++cnt;//legel
		 ++sz;//illegel, unchanged
		 
* EX2_27

        (a) int i = -1, &r = 0;//illegel,r is a reference, so it must have an object.
        (b) int *const p2 = &i2;//legel
        (c) const int i = -1, &r = 0;//重点注意，在如果是const类型，可以使引用的值为0
        (d) const int *const p3 = &i2;//legel
        (e) const int *p1 = &i2;//legel
        (f) const int &const r2;//illegel
        (g) const int i2 = i, &r = i;//legel
        
* EX2_28

        (a) int i, *const cp;//illegel, i is int, cp is const pointer, should be initialized
        (b) int *p1, *const p2;//illegel, p2 shoule be initialized
        (c) const int ic, &r = ic;//illegel, ic should be initialized
        (d) const int *const p3;//illegel, p3 should be initialized
        (e)coust int *p;//legel, p points to const 
               
区分const int *p 和 int *const p;前者是指向常量的指针，即其指向的值不可以通过改变指针的指向而改变，但是指向的值本身可以通过其他途径改变。而且指向常量的指针不一定指向的就是常量。

后者为常量指针,必须进行初始化，其指向的地址不可变。

* EX2_29 

        前提条件(主要看类型，其中有的不合法）：
        	int i;
        	const int ic;
        	int *p1;
        	int *const p2;
        	int *const p3;
        	
        以下哪些不合法？ 
        （a) i = ic;//legel, put value of ic to i
         (b) p1 = p3;//illegel, p1 is not a const pointer
         (c) p1 = &ic;//illegel, p1 is not a const pointer
         (d) p3 = &ic;//illegel, p3 is not a pointer points to conste, should be const int* p3;
         (e) p2 = p1;//illegel, p2 is a const pointer
         (f) ic = *p3;//ic is a const int
         
* EX2_30

说明是被声明成了顶层const 还是 底层const

    const int v2 = 0;//low-level const
    int v1 = v2; 
    int *p1 = &v1, &ri = v1;
    const int *p2 = &v2;//low-level const
    *const p3 = &i, &r2 = v2;//p3 is top-level const, r2 is low-level const
    
        
        	
        	



	