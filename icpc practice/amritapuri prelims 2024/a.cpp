#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int l=n*3;
        int n3=0, n2=0, n1=0;
        vector<int> a(l);
        for (int i = 0; i < l; i++)
        {
            cin>>a[i];
            if (a[i]==3){
                n3++;
            }
            else if (a[i]==2){
                n2++;
            }
            else{
                n1++;
            }
        }
        
        bool success=true;

        if (n1>n2*2){
            success=false;
        }
        if (n3==0){
            if ((n1+n2*2)%3!=0){
                success=false;
            }
            if ((n1%3!=0) || (n2*2)%3!=0){
                success=false;
            }
        }

        if (n==1){
            // sort(a.begin(), a.end());
            // if (a[0]+a[1]==a[2]){
            //     success=true;
            // }
            // else{
            //     success=false;
            // }
            success=true;
        }

        if (success){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    
    return 0;
}