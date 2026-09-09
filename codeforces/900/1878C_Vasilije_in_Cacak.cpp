#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long int n , k ,x;
        cin >> n >> k >> x;
        long long int sum_max = 0;
        long long int sum_min = k*(k+1)/2;
        for (int i = 0; i < k; i++)
        {
            sum_max += n-i;
        }
        if (sum_max >= x && sum_min <= x)
        {
            cout << "YES\n"; 
        }
        else
        {
            cout << "NO\n";
        }
        t--;
    }
}