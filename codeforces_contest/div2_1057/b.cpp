#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        bool success=true;

        int p=a&b;
        int m=b&c;
        int k=a&c;

        if (p != m || m != k || k!=p){
            success=false;
        }
        

        if (success){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}