#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int a, minimum;
        cin >> a;
        int arr[a];
        
        cin >> arr[0];
        
        for(int i = 1; i < a; i++)
        {
            cin >> arr[i];
            if (i == 1)
            {
                minimum = arr[1] - arr[0];
            }
            if (arr[i] - arr[i-1] < minimum)
            {
                minimum = arr[i] - arr[i-1];
            }
        }
        
        if (minimum < 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << int((minimum+2)/2) << "\n";
        }
        n--;
    }
}