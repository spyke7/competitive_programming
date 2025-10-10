#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector <int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }

        sort(b.begin(), b.end());

        int c=0;
        int apple = 0;
        for (int i = 0; i < n; i++)
        {
            if (i==0){
                c++;
                apple=b[i];
            }
            else{
                if (apple<b[i]){
                    c++;
                    apple=b[i];
                }
            }
        }
        cout<<c<<endl;
        
    }
    
    return 0;
}