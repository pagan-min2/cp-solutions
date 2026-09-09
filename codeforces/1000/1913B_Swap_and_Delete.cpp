#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        bool found = false;
        vector <int> v;
        string s;
        cin >> s;
        int c0= 0;int c1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                c0 ++;
            }
            else
            {
                c1 ++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                c1 --;
            }
            else
            {
                c0 --;
            }
            if (c1 == -1 || c0 == -1)
            {
                found = true;
                cout << s.size() - i <<"\n";
                break;
            }
        }
        if (!found)
        {
            cout << 0 << "\n";
        }
        n--;
    }
}