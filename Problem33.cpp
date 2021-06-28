/*
1. 問題描述 ：

寫一個程式求一整數序列所含之整數個數及平均值。

輸入說明 ：

一整數序列以空白鍵隔開數字。

輸出說明：

序列所含之整數個數及平均值。精確至小數點第3位(由小數點第4位四捨五入)




*/

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{

    int a, arr[100], size = 0;
    long double ave;
    double sum = 0;

    while (cin >> a)
    {
        arr[size++] = a;
        char ch = getchar();
        if (ch == '\n')
            break;
    }
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
    
    ave = sum / size;
    cout << "Size:" << size << endl;
    cout << fixed << setprecision(3) << "Average:" << (long double)ave << endl;

    return 0;
}