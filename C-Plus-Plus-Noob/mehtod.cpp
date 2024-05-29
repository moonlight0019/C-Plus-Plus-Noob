#include <iostream> //在使用cout时需要包含此头文件
#include "method.h"
using namespace std;
#include <string> //在使用string类型时需要包含此头文件

//水仙花数
int sxhs()
{
    int j = 100;
    int num_sxhs = 0;
    do
    {
        //求个位数
        int gws = j % 10;
        //求十位数
        int sws = j / 10 % 10;
        //求百位数
        int bws = j / 100 % 10;
        //判断是否为水仙花数
        if (gws * gws * gws + sws * sws * sws + bws * bws * bws == j)
        {
            cout << j << endl;
            num_sxhs++;
        }
        j++;
    } while (j < 1000);
    return 0;
}

//do while循环演示
int do_while_demo() {
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 10);
    return 0;
}

//乘法口诀表
int multiplication_table()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            cout << j << "*" << i << "=" << i*j << "\t";
        }
        cout << endl;
    }
    return 0;
}