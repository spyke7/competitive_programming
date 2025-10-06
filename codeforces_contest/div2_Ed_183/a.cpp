#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n%3==0){
            cout<<0<<endl;
        }
        else
        {
            int c = n%3;
            cout<<3-c<<endl;
        }
        
    }
    
    return 0;
}