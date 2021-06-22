

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n;
    int num[4] = {0};
    cin >> n;
    num[0] = n / 1000;
    num[1] = n / 100 % 10;
    num[2] = n / 10 % 10;
    num[3] = n % 10;

    //1 row
    for (int i = 0; i < 4; i++)
    {
        switch (num[i])
        {
        case 1:
            cout << "    *"
                 << " ";
            break;
        case 4:
            cout << "*   *";
            break;
        default:
            cout << "*****"
                 << " ";
            break;
        }
    }
    cout << endl;

    // 2 row
    for (int i = 0; i < 4; i++)
    {
        switch (num[i])
        {
        case 1:
        case 2:
        case 3:
        case 7:
            cout << "    *"
                 << " ";
            break;
        case 0:
        case 4:
        case 8:
        case 9:
            cout << "*   *"
                 << " ";
            break;
        case 5:
        case 6:
            cout << "*    "
                 << " ";
            break;
        }
    }
    cout << endl;

    // 3 row
    for (int i = 0; i < 4; i++)
    {
        switch (num[i])
        {
        case 0:
            cout << "*   *"
                 << " ";
            break;
        case 1:
        case 7:
            cout << "    *"
                 << " ";
            break;
        default:
            cout << "*****"
                 << " ";
        }
    }
    cout << endl;

    // 4 row
    for (int i = 0; i < 4; i++)
    {
        switch (num[i])
        {
        case 0:
        case 8:
            cout << "*   *"
                 << " ";
            break;
        case 1:
        case 7:
        case 9:
            cout << "    *"
                 << " ";
            break;
        case 2:
            cout << "*    "
                 << " ";
            break;
        case 3:
        case 4:
        case 5:
            cout << "    *"
                 << " ";
            break;
        case 6:
            cout << "*   *"
                 << " ";
        }
    }
    cout << endl;

    // 5 row
    for (int i = 0; i < 4; i++)
    {
        switch (num[i])
        {
        case 1:
            cout << "    *"
                 << " ";
            break;
        case 4:
        case 7:
        case 9:
            cout << "    *"
                 << " ";
            break;
        default:
            cout << "*****"
                 << " ";
            break;
        }
    
    }
    cout << endl;
    return 0;
}