#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a;
        cin >> a;
        int x;
        cin >> x;
        vector <int> v;
        int ans;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        if (x == 2)
        {
            ans = 1;
            for (int i = 0; i < a; i++)
            {
                if (v[i] % 2 == 0)
                {
                    ans = 0;
                }
            }
            cout << ans << "\n";
        }
        else if(x == 3 || x == 5)
        {
            if(x == 3)
            {
                ans = 3;
            }
            else
            {
                ans = 5;
            }
            for (int i = 0; i < a; i++)
            {
                if (x-(v[i]%x) < ans )
                {
                    ans = x-(v[i]%x);
                }
                if (v[i]%x == 0)
                {
                    ans = 0;
                } 
            }
            cout << ans <<"\n";
        }
        else if(x == 4)
        {
            bool isdivisible = false;
            int four = 0;
            int three = 0;
            int two = 0;
            int one = 0;
            for (int i = 0; i < a; i++)
            {
                if (v[i]%4 == 3)
                {
                    three ++;
                }
                else if(v[i]%4 == 2 )
                {
                    two++;
                }
                else if(v[i]%4 == 1)
                {
                    one++;
                }
                if (v[i]%x == 0)
                {
                    isdivisible = true;
                }
                
            }
            if (two > 1)
            {
                ans = 0;
            }
            else if(three > 0 || two > 0)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
            if (isdivisible)
            {
                ans = 0;
            }
            cout << ans << "\n";
        }
        n--;
    }
    
}