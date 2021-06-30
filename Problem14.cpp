/*
問題描述：
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。請撰寫一個程式，判斷它是否迴文。

輸入說明：
輸入一個正整數。

輸出說明：
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{

    string num, str;
    while (cin >> num)
    {
        str = num;
        reverse(str.begin(), str.end());
        if (num == str)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}