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