#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t > 0)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int sum = b;
        for (long long int i = 0; i < n; i++)
        {
            long long int temp;
            cin >> temp;
            if (temp < a)
            {
                sum += temp;
            }
            else
            {
                sum += a-1;
            }
        }
        cout << sum << "\n";
        t--;
    }
}