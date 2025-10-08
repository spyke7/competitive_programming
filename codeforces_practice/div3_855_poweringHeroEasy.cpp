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

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        vector <int> buff (n,0);

        int ans=0;

        for (int i = 0; i < n; i++)
        {
            if (a[i]>0){
                buff.push_back(a[i]);
                sort(buff.begin(), buff.end());
            }
            else{
                ans+=buff[buff.size()-1];
                buff.erase(buff.begin() + buff.size()-1);
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}