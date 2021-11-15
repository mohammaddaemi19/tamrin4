#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "please enter n:";
    cin >> n;
    cout << "please enter m:";
    cin >> m;
    for (int i = 1;i <= n;i++)
    {
        if (i == n )
        {
            for (int j= 1;j <= m;j++)
            {
                cout << i * j << "  ";
            }
            break;
        }
        for (int j = 1;j <= 10;j++)
        {
            cout << i * j << "   ";
        }
        cout << endl;
    }
}

