
/*

問題描述：
試撰寫一程式，可由鍵盤輸入英哩，程式的輸出為公里，其轉換公式如下：
1 英哩= 1.6 公里

輸入說明：
輸入欲轉換之英哩數(int)。

輸出說明：
輸出公里(double)，取到小數點以下第一位。


*/


#include <iostream>
#include <iomanip>

using namespace std;
int main(){

    int mile;
    double km;
    while(cin >> mile){ //輸入英里
        km =(double)mile * 1.6;
        cout << fixed << setprecision(1) << km;
        cout <<endl;
    }
}