# 第三章的笔记及练习

* EX3.3

string不会读入空白字符，空白字符默认为一个string的结束

getline会读取空白字符，直到遇到换行符之后会把输入流中的input移动到string中，并丢弃换行符

* EX3_9

判断下列程序是否合法：
    
     string s;
     cout << s[0] << endl;
不合法，因为如果s为空，那么s[0]是未定义的值，这样的输出结构未定义。

* EX3_11

判断下列程序是否合法：

     const string s = "Keep out!";
     for (auto &c :s){}
如果不改变c的值就合法，c的类型是const char&

* EX3_12

判断下列表示是否正确，正确的请说明执行结果，不正确的说明错误原因：

    (1)vector<vector<int>> ivec;//legel, 一个类型为vecton<int>类型的空vector
    (2)vector<string> svec = ivec;//illegal，string and vector<int> 的类型不同
    (3)vector<string> svec(10,"null");//legel,一个大小为10，类型为string，元素值为"null"的vector
    
* EX3_13

判断下列包含多少元素，这些元素的值是多少：

    (1)vector<int> v1;//没有元素，是空的vector
    (2)vector<int> v2(10);//10个元素，都为空
    (3)vector<int> v3(10，42);//10个元素，都是42
    (4)vector<int> v4{10};//1个元素，10
    (5)vector<int> v5{10,42};//2个元素，10和42
    (6)vector<string> v6{10};//10个元素，值是空
    (7)vector<string> v7{10,"hi"};//10个元素，都是"hi"
    
* EX3_18

判断下列的程序是否合法：

    vector<int> ivec;
    ivec[0] = 42;
不合法，空的vector不能用下标。可以改成：

   	vector<int> ivec{0};//一个元素，值为0，不可用（0）,这个表示0个元素，没有意义
   	
* EX3_26

在100页的二分搜索程序中，为什么用的是

    mid = beg +(end - beg)/2;
    不是 mid = (beg + end)/2
因为 end - beg 表示了两指针之间的距离，不可用beg + end。

标准解释：Because the iterator of vector don't define the + operator between the two iterators. beg + end is illegal. We can only use the subtraction between the two iterators.

迭代器不会定义+,在两个迭代器之间只可以用减法。

* EX3_27

txt_size是一个无参数的函数，返回值是int,下列哪个定义是非法的？

    unsigned buf_size = 1024;
    (1)int ia[buf_size];//illegel,because buf_size is not a constexpr.
    e.g. constexpr int mf = 20;//it is constexpr.
    constexpr int limit = mf + 1;//it is constexpr.
    (2)int ia[4*7-14];//legel
    (3)int ia[txt_size()];//if txt_size is not a cosnt,  it is illegel, vise versa
    (4)char st[11] = "fundamental";//legel, at least 12 spaces
    
* EX3_29

数组相比与vector的缺点在于长度不可变，不可以在array之后添加元素。

* EX3_30

下列代码中的错误在于：
     
    constexpr sizt_t array_size = 10;
    int ia[array_saze];
    for(size_t ix =1; ix <= array_size;++ix)
    	ia[ix] = ix;
错误在于ix应该小于array_size.

* EX3_33

如果不初始化scores,因为array是内置类型，所以scores是undefined,它的值是不确定的

* EX3_34

p1 and p2是指向同一个数组中的元素，下面程序的功能是什么？在什么情况之下是非法的？

    p1 += p2 - p1;
功能是使p1每次都到p2的位置中去，p1 = p2。当p2超出array最后一个空值的范围之后非法。

* EX3_37

下面的程序是什么意义，输出的结果是什么？

    const char ca[]= {'h','e','l','l','o'};
    const char *cp = ca;
    while(*cp){
    	cout << *cp << endl;
    	++cp;
    }
遍历ca[],输出这个数组中的字符，结果hello.在C-style中，读取字符会以\0结尾，直到读到\0才会停止。

* EX3_38

因为指针指向的是随机的地址，是和内存有关的，与值无关。

可以参考下：https://stackoverflow.com/questions/2935038/why-cant-i-add-pointers
