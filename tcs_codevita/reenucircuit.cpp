#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x1,y1,x2,y2;
    vector<vector<string>> circuit(n, vector<string>(n));
    bool start=false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>circuit[i][j];
            if (circuit[i][j]=="." && !start){
                x1=i;
                y1=j;
            }
            else{
                x2=i;
                y2=j;
            }
        }
    }
    


    
    return 0;
}