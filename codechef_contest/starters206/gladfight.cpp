#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n,0);
        int maxS=0;
        int minS=n-2;
        for (int i = 1; i < n; i++)
        {
            maxS=maxS+a[0]+a[i];
            a[0]++;
        }
        cout<<minS<<" "<<maxS<<endl;
        
    }
    
    return 0;
}