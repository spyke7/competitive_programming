#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }

        if (n == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 2 << " " << 1 << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[(i + j) % n] << " ";
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }

    return 0;
}