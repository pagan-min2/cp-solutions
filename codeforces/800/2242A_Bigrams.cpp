#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a;
        cin >> a;
        int d = 0;
        int t = 0;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            if (temp > 2)
            {
                t++;
            }
            if (temp == 2)
            {
                d++;
            }
        }
        if (t >= 1)
        {
            cout << "YES\n";
        }
        else if (d >= 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        n--;
    }
}