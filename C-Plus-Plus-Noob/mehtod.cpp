#include <iostream> //��ʹ��coutʱ��Ҫ������ͷ�ļ�
#include "method.h"
using namespace std;
#include <string> //��ʹ��string����ʱ��Ҫ������ͷ�ļ�

//ˮ�ɻ���
int sxhs()
{
    int j = 100;
    int num_sxhs = 0;
    do
    {
        //���λ��
        int gws = j % 10;
        //��ʮλ��
        int sws = j / 10 % 10;
        //���λ��
        int bws = j / 100 % 10;
        //�ж��Ƿ�Ϊˮ�ɻ���
        if (gws * gws * gws + sws * sws * sws + bws * bws * bws == j)
        {
            cout << j << endl;
            num_sxhs++;
        }
        j++;
    } while (j < 1000);
    return 0;
}

//do whileѭ����ʾ
int do_while_demo() {
    int i = 0;
    do
    {
        cout << i << endl;
        i++;
    } while (i < 10);
    return 0;
}

//�˷��ھ���
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