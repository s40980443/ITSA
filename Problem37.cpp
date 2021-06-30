/*
問題描述 ：

有一種仿間常見的遊戲稱為 "18 啦 "~ 玩法介紹 : 由四個骰子來擲，只要其中任兩個是相同點，才開始計算點數，點數即為另兩個點數相加，若另兩個也一樣，則取較大的一組相加，另外有下列幾種特殊情況 :

1. 擲出 4 顆骰子點數均相同，稱為通殺 !

2. 任三顆點數相同或四顆點數均不相同，即為無意義 !

請寫一程式，各別輸入四顆骰子點數，判斷結果 !

輸入說明 ：

各別輸入四次骰出的點數 ，一行輸入一次，輸入的點數為 1~6 之間 。

輸出說明 ：

若是通殺，則顯示大寫英文字母 WIN ， 若是無意義 ，則 顯示大寫英文字母 R ，若可計算點數，則顯示最後點數 。 輸出結果前後均不需留空格 。
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <memory>

using namespace std;
int main()
{

    int n1, n2, n3, n4;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    if (n1 == n2 &&n1==n3 && n1 == n4 &&  n2 == n3 && n3 == n4)
    {
        cout << "WIN" << endl;
    }

    else if (n1 != n2 && n1 != n4 && n1!=n3 && n2 != n3 && n3 != n4)
    {
        cout << "R" << endl;
    }

    else if (n1 == n2 && n2 == n3)
    {
        cout << "R" << endl;
    }
    else if (n2 == n3 && n3 == n4)
    {
        cout << "R" << endl;
    }
    else if (n1 == n3 && n3 == n4)
    {
        cout << "R" << endl;
    }
    else if (n1 == n4 && n4 == n2)
    {
        cout << "R" << endl;
    }


    else if (n1 == n2 && n1 + n2 < n3 + n4)
    {
        cout << n3 + n4 << endl;
    }
    else if (n1 == n2 && n1 + n2 > n3 + n4)
    {
        cout << n1 + n2 << endl;
    }


    else if(n1 == n3 && n1+n3 > n2+n4){
        cout << n1+n3 <<endl;
    }
    else if(n1 == n3 && n1+n3 < n2+n4){
        cout << n2+n4 <<endl;
    }


    else if (n1 == n4 && n1 + n4 > n2 + n3)
    {
        cout << n1 + n4 << endl;
    }
    else if (n1 == n4 && n1 + n4 < n2 + n3)
    {
        cout << n2 + n3 << endl;
    }


    else if (n2 == n3 && n1 + n4 > n2 + n3)
    {
        cout << n1 + n4 << endl;
    }
    else if (n2 == n3 && n1 + n4 < n2 + n3)
    {
        cout << n2 + n3 << endl;
    }

    else if (n3 == n4 && n1 + n2 > n3 + n4)
    {
        cout << n1 + n2 << endl;
    }
    else if (n3 == n4 && n1 + n2 < n3 + n4)
    {
        cout << n3 + n4 << endl;
    }

    
}