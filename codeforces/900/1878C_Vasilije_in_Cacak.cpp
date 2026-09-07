#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while(a>0)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == k)
            {
                if (found){}
                else
                {
                    found = true;
                }
            }
        }
        if (found)
        {
            cout << "YES\n";
        }
        
        if (!found)
        {
            cout << "NO\n";
        }
        a--; 
    }
}