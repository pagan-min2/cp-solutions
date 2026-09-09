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
        vector <int> v;
        int max = 0;int count = 0;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
            if (max < temp)
            {
                max = temp;
            }
        }
        for (auto i : v)
        {
            if (i == max)
            {
                count ++;
            }
            
        }
        cout << count <<"\n";
        n--;
    }
    
}