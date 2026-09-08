#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        if (n% 2 == 0)
        {
            cout << 2 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
        }
        else
        {
            cout << 4 << "\n";
            cout << 1 << " " << n-1 << "\n";
            cout << 1 << " " << n-1 << "\n";
            cout << n-1 << " " << n << "\n";
            cout << n-1 << " " << n << "\n";
        }
        t--;
    }
}