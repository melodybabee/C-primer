# 第四章的笔记及练习

* EX4_1

5+10*20/2 = 105

* EX4_2

在下列表达式中添加括号，使得添加括号后运算对象的组合顺序与添加括号前一致：

(1）*vec.begin() = *(vec.begin())

(2) *vec.begin() + 1 = (*(vec.begin())) + 1

* EX4_3

余地的英文是trade-off.

这种trade-off是必要的，因为快速、高效率往往是C++的优势之一，我们需要编译器提供给我们高效的运算速度。但是最好在初步学习的时候不使用undefined behaviors,eg.cout << i << ++i << endl;就是错误的。