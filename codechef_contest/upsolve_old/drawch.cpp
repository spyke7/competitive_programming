#include <bits/stdc++.h>
using namespace std;

string solve(int n, int m, string s){
    int n0=0;
	int n1=0;
	for (int i=0; i<m; i++){
	   if (s[i]=='0'){
	    n0++;
	   }
	   else{
	    n1++;
	   }
	}
    if (n%2!=0){
        return "No\n";
    }
    if (m>=n/2){
        if (n-m + min(n0,n1)>= max(n0,n1)){
            return "Yes\n";
        }
        else{
            return "No\n";
        }
    }
    else{
        return "Yes\n";
    }
    
    
}

int main() {
	int t;
	cin>>t;
	while (t--){
	    int m,n;
	    cin>>n>>m;
	    string s;
	    cin>>s;
	    cout<<solve(n, m, s); 
	}

}
