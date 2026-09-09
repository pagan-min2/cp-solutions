#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector <int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int start,end,last;int max = 0;
        int fstart,fend;

        for (auto i = 0; i < n; i++)
        {
            if (v[i] == 1 || v[i] == -1)
            {
                start = i;
                break;
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {
                end = i;
                if (end - start >= max)
                {
                    max = end - start;
                    fstart = start;
                    fend = end;
                }
                start = i;
            } 
            if (v[i] == -1)
            {
                last = i;
            }
        }
        if (last - start >= max)
        {
            max = last - start;
            fstart = start;
            fend = last;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == -1 && (i == fend || i == fstart))
            {
                v[i] = 1;
            }
            else if(v[i] == -1)
            {
                v[i] = 0;
            }
            cout << v[i] << " ";
        }
        cout << "\n";
        t--;
    }
}