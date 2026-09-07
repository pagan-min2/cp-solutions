#include <iostream>
#include <string>
#include <vector>
using namespace std;

int no_of_odd_occurences(string s)
{
    int count = 0;
    vector <int> v(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        v[s[i]-'a'] ++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (v[i] % 2 == 1)
        {
            count ++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count = no_of_odd_occurences(s);
        if (count > k +1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
        t--;
    }
}