#include <bits/stdc++.h>
using namespace std;

bool greaterNum(int c, int d){
    return c>d;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < a.size(); i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greaterNum);
        int total=0;
        for (size_t i = 0; i < k; i++)
        {
            total+=a[i];
        }
        cout<<total<<endl;
        
    }
    
    return 0;
}