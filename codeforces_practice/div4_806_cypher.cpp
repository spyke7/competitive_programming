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

        vector <string> b(n);

        int c;

        for (int i = 0; i < n; i++)
        {
            cin>>c;
            cin>>b[i];
        }
        
        vector <int> res(n);

        for (int i = 0; i < n; i++)
        {
            int ans=a[i];
            for (int j = 0; j < b[i].size(); j++)
            {
                if (b[i][j]=='D'){
                    ans++;
                    if (ans==10){
                        ans=0;
                    }
                }
                else if (b[i][j]=='U'){
                    ans--;
                    if (ans==-1){
                        ans=9;
                    }
                }
            }
            res[i] = ans;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}