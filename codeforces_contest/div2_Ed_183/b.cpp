#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int top = 0, bottom = 0, q = 0;
        for (char c : s) {
            if (c == '0') top++;
            else if (c == '1') bottom++;
            else q++;
        }

        if (n == k) {
            cout << string(n, '-') << '\n';
            continue;
        }

        int Lmax = top + q;
        int Rmax = bottom + q;

        int Llow = max(top, k - Rmax);
        int Lhigh = min(Lmax, k - bottom);

        int remainLen = n - k;

        string ans(n, '?');

        if (Llow > Lhigh) {
            cout << string(n, '-') << '\n';
            continue;
        }

        int Uleft = Llow + 1;
        int Uright = Lhigh + remainLen;

     
        int Ileft = Lhigh + 1;
        int Iright = Llow + remainLen;

        for (int i = 1; i <= n; ++i) {
            if (i < Uleft || i > Uright) {
                ans[i-1] = '-';
            } else if (Ileft <= Iright && i >= Ileft && i <= Iright) {
                ans[i-1] = '+';
            } else {
                ans[i-1] = '?';
            }
        }

        cout << ans << '\n';
    }
    
}