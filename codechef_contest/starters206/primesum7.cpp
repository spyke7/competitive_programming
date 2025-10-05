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
        for (size_t i = 0; i < a.size(); i++)
        {
            cin>>a[i];
        }
        int pairs=0;
        for (int i = 0; i < n-1; i++)
        {
            
            for (int j = i+1; j < n; j++)
            {
                int x=a[i]+a[j];
                int factors=0;
                for (int k = 1; k < x; k++)
                {
                    if (x%k==0){
                        factors++;
                    }
                }
                if (factors<2){
                    pairs++;
                }
                
            }
            
        }
        cout<<pairs<<endl;
        
    }
    
    return 0;
}