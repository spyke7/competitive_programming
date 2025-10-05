#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());

        vector<int> prices(n, -1);

        for (int m = 1; m <= n; m++)
        {
            int price=0;
            if (k>=m){
                if(m-1==0){
                    prices[m-1]=a[0];
                }
                else{
                    for (int i = m-1; i < m; i++)
                    {
                        price+=a[i];
                    }
                    prices[m-1]=price+prices[m-2];
                    
                }
            }
            else{
                int j=k;
                int tmp = m-1;
                while (tmp>=0)
                {
                    price+=a[tmp];
                    tmp--;
                    j--;
                    // cout<<price<<" "<<tmp<<endl;
                    if (j==0 ){
                        tmp--;
                        j=k;
                    }
                }
                prices[m-1]=price;
                
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<prices[i]<<" ";
        }
        cout<<endl;
        
        
    }
    
    return 0;
}