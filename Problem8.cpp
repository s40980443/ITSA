/*
問題描述：
試撰寫一個程式，由輸入一個整數，然後判別此數是否為質數。質數是指除了 1 和它本身之外，沒有其它的數可以整除它的數，例如， 2, 3, 5, 7 與 11 等皆為質數。

輸入說明：
輸入一個正整數。

輸出說明：
質數顯示 YES ；非質數顯示 NO 。


*/

#include <iostream>
using namespace std;
int main()
{
    int num, i;
    int count ;

    while (cin >> num)
    {
        count = 0 ;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
                count++;
        }

        if (count >= 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
