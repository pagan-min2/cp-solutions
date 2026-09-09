#include <iostream>
#include <vector>
#include <algorithm>
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

        int x = 0; int y = 0; int z = 0;
        for (auto i : v)
        {
            if (i % 2 != 0)
            {
                x++;
            }
            else if (i % 4 == 0)
            {
                y++;
            }
            else
            {
                z++;
            }
        }
        int temp = x;
        if (y > temp)
        {
            temp = y;
        }
        if (z > temp)
        {
            temp = z;
        }
        cout << temp << "\n";
        t--;
    }
}