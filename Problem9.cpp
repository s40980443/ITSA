/*
問題描述：
試寫一個程式，輸入一正整數N，可計算出1到N之間可被3整除的數值之總和。

輸入說明：
輸入一正整數。

輸出說明：
輸出總和。

*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    long long int N;

    while (cin >> N)
    {
        int count = 0;

        int j = 0;
        for (int i = 1; i <= N; i++)
        {
            if (i % 3 == 0)
            {
                count += i;
                j++;
            }
        }
        cout << count << endl; 
        //  int sum = 0;
        // for (int i = 0; i <= N; i++)
        // {
        //     sum += count[i];
        // }
        // cout << sum << endl;
    }

    return 0;
}