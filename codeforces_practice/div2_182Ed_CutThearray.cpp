#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int sumT=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sumT+=a[i];
        }
        int l=0, r=0;
        if (sumT%3==0){
            l=1;
            r=2;
        }
        cout<<l<<" "<<r<<endl;
        
    }
    
    return 0;   
}