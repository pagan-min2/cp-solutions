#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t > 0)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long int d = y - x;
        long long int sum = 0;
        if (y < 2 * x) 
        {
            sum = k * d;
        } 
        else 
        {
            long long int limit = y - 2 * x;
            long long int i = 0;
            while (i < k && i <= limit) 
            {
                sum += (y + i) % (x + i);
                i++;
            }
            if (i < k) 
            {
                sum += (k - i) * d;
            }
        }
        cout << sum << "\n";
        t--;
    }
}