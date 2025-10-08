//failed in test case 2 🥲

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
        vector<pair<int, int>> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i].first = a[i];
            b[i].second = i;
        }

        sort(b.begin(), b.end());

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            p[b[i].second] = b[(i -1 +n) % n].second;
        }

        int score = 0;
        bool fixed = false;
        for (int i = 0; i < n; ++i)
        {
            if (p[i] == i)
                fixed = true;
            else if (a[p[i]] <= a[i])
                score++;
        }

        if (fixed)
            score = -1;

        cout << score << "\n";
        for (int i = 0; i < n; ++i)
            cout << p[i] + 1 << " "; 
        cout << endl;
    }
    return 0;
}