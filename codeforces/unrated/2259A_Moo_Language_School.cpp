#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a > 0)
    {
        int n, k;
        vector<int> v;
        string s;
        cin >> n >> k;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            v.push_back(s[i] - '0');
        }

        int count = 0;

        for (int i = 0; i < n; i += k)
        {
            bool possible = false;
            vector<int> u(v.begin() + i, v.begin() + min(n, i + k));

            for (auto j : u)
            {
                if (j == 0)
                {
                    possible = true;
                }
            }
            if (!possible)
            {
                count++;
            }
        }
        cout << count << "\n";
        a--;
    }
}