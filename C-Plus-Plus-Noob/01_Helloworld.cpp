// C-Plus-Plus-Noob.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream> //在使用cout时需要包含此头文件
using namespace std;
#include <string> //在使用string类型时需要包含此头文件
#include "method.h"

//常量，一旦修改会报错：表达式必须是可修改的左值
#define day 7
const int month = 12;

int sxhs();

int main()
{
    
    cout << "Hello World!\n";
    
    //短整型，取值范围：-32768~32767
    short num_short = 10;
    //整型，取值范围：-2147483648~2147483647
    int num_int = 20;
    //长整型，取值范围：-2147483648~2147483647
    long num_long = 30;
    //长长整型，取值范围：-9223372036854775808~9223372036854775807
    long long num_longlong = 40;
    
    //sizeof关键字，用于获取变量占用的内存空间大小
    //用法：sizeof(变量名)
    cout << "short占用的内存空间大小为：" << sizeof(num_short) << endl;
    cout << "int占用的内存空间大小为：" << sizeof(num_int) << endl;
    cout << "float占用的内存空间大小为：" << sizeof(float) << endl;

    //float：单精度浮点型，取值范围：1.17549e-38~3.40282e+38 注意：在数值后面加上f
    float num_float = 3.1415926f;
    //double：双精度浮点型，取值范围：2.22507e-308~1.79769e+308
    double num_double = 3.14;
    //默认情况下，输出小数点后6位
    cout << "num_float = " << num_float << endl;
    //科学计数法
    float num_float_s = 3.1415926e2;
    cout << "num_float_s = " << num_float_s << endl;

    //char：字符型
    char ch = 'a';
    cout << "ch = " << ch << endl;
    //char注意事项：只能使用单引号，且只能存放一个字符
    //字符型变量存储的是字符对应的ASCII码值
    cout << "ch = " << (int)ch << endl;

    //转义字符
    //\n：换行；\t：制表符；\\：输出\；\'：输出'；\"：输出"
    //\t的作用是在输出时对齐
    cout << "aaa\thello" << endl;
    cout << "a\thello" << endl;
    cout << "aa\thello" << endl;

    //字符串
    //C风格字符串
    char str1[] = "hello world";
    cout << "str1 = " << str1 << endl;
    //C++风格字符串
    //需要包含头文件<string>
    string str2 = "hello world";
    cout << "str2 = " << str2 << endl;

    //布尔类型：bool，代表真假，取值范围：false（0）和true（1），占用1个字节
    bool flag = true;
    cout << "bool类型所占的空间=" << sizeof(flag) << endl;
    cout << "flag = " << flag << endl;

    //do-while语句,在屏幕中输出0-9
    cout << "do-while语句，输出0-9" << endl;
    do_while_demo();

    //输出水仙花数
    cout << "输出水仙花数" << endl;
    sxhs();

    //输出乘法口诀表
    cout << "输出乘法口诀表" << endl;
    multiplication_table();

    system("pause");

    return 0;
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
