# 第四章的笔记及练习

* EX4_1

5+10*20/2 = 105

* EX4_2

在下列表达式中添加括号，使得添加括号后运算对象的组合顺序与添加括号前一致：

(1）*vec.begin() = *(vec.begin())

(2) *vec.begin() + 1 = (*(vec.begin())) + 1

* EX4_3

权衡的英文是trade-off.

这种trade-off是必要的，因为快速、高效率往往是C++的优势之一，我们需要编译器提供给我们高效的运算速度。但是最好在初步学习的时候不使用undefined behaviors,eg.cout << i << ++i << endl;就是错误的。

* EX4_4

对12/3*4+5*15+24%4/2加括号，使其满足运算顺序

（（（12/3））*4 ）+ （5*15）+（（24%4）/2）= 91

* EX4_5

(a) -30 * 3 + 21/5 = -86
(b) -30 + 3*21/5 = -18
(c) 30/3 * 21%5 = 0
(d) -30 / 3 * 21 %4 = -2

* EX4_6

写出一个表达式确定一个数是奇数还是偶数

    int a;
    if(a%2 == 0) a is even; or a is odd;

* EX4_7

溢出指数值意境超过声明的数据类型所能包括的最大内存,比如：

int a = 2147483647; ++a; int类型的最大正向范围是2的31次幂-1；

short b = 32767; ++b; short类型的最大正向范围是2的15次-1；

unsigned c = 0; --c; 

unsigned short d = 65535; d++;

* EX4_8

&& 只有当左侧为真的时候才会进入右侧

|| 只有当左侧为假的时候才会进入右侧

== 如果左侧和右侧相等时为true,否则为false

* EX4_9

cp为指向string的char类型常量指针，*cp是指cp指向的地址的值。

当cp指向的地址不为空的前提下，cp指向的值不为空，那么条件为真，否则都为假

* EX4_11

写一个表达式测试a b c d四个值的关系，确保a>b,b>c,c>d

    if(a>b && b>c && c>d)
    
* EX4_12

注意<的运算顺序是在!=优先级前面的，因此可改写为 i != (j<k);此时i与（j<k)比较后的true or false结果进行比较。

如果想要达到本身比较的目的可以改写为 i != j && j < k;

* EX4_13

赋值后的i和d的值分别是多少：
int i; double d;

（1）d = i =3.5;//i=3,d = 3.0;注意double类型会保留到小数点之后

（2) i = d = 3.5;// d = 3.5, i = 3;

* EX4_14

执行下列语句之后会出现什么？

(1）if(42 = i) //error

(2) if(i = 42) //将42赋值给i,此语句一直为真

* EX4_15

下面的赋值是非法的，为什么？应该如何修改？

    double dval; int ival; int *pi;
    dval = ival = pi = 0;
因为三个变量的类型不同，pi是int型指针，不能转换为int型，不能用0赋值给它们。

    dval = ival = 0;
    pi = 0;
    
* EX4_16

下面的语句合法但是和实际执行的行为可能不同，为什么？应该如何修改？

    (a) if (p = getPtr() != 0)//缺少括号，因为赋值语句的优先度低，因此会先判断get的值是否为0，同时把true or false赋值给p.可以改为 if((p = getPtr()) != 0)
    (b) if (i = 1024)//不是赋值应为相等，if(i == 1024)
    
* EX4_17

前置递增运算比如++i，是先相加后把加1得到的值赋给新的元素

而后置递增运算比如i++，是先把i赋值给对应值后再加1

* EX4_18

下列程序会得到什么结果？

    auto pbeg = v.begin();
    while(pbeg != v.end() && *pbeg >= 0)
      cout << *++pbeg << endl;
会从vector的第二个元素值开始输出，最后会加到v.end()的位置，it is undefined.

* EX4_19

ptr是指向int的指针，vec的类型是vector<int>,ival的类型是int,下面的表达式什么含义？如果不正确， 为什么？如何修改？

    (a) ptr != 0 && *ptr++ //ptr不为空且检查ptr的值，ptr++的值是不会改变pte本身的
    (b) ival ++ && ival // ival和ival+1是否为真
    (c) vec[ival++] <= vec[ival] //ival为index的位置的值小于等于ival加1位置的值，会出现错误。改正：vec[ival] <= vec[ival+1];
    
* EX4_20

假设iter的类型是vector<string>::iterator，说明下列表达式是否合法，如合法，含义是什么？若不合法，错在何处？

vector<string>::iterator表明iter的类型是指向vector中string的指示器，是指针类型，指向了string的地址

    (a) * iter++;//++的运算顺序在*之前，return iter的值，再++iter的位置【需要注意】
    (b)(*iter)++;//illegal，*iter是string类型，不可增值
    (c) *iter.empty();//illegal，iter -> empty();or(*iter).empty();
    (d)iter -> empty();//the value of iter is empty or not
    (e)++*iter;//illegel, same as (b)
    (f)iter++ -> empty();//

