#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int n1=0, n0=0;
	    for (int i=0; i<n; i++){
	        if (s[i]=='0'){
	            n0++;
	        }
	        else{
	            n1++;
	        }
	    }
	    
	    if (n1==0 || n0==0){
	        cout<<0<<endl;
	        continue;
	    }
	    else{
	        int k=n, l=0;
	        int c=0;
	        for (int i=0; i<n; i++){
	            if (s[i]=='1'){
	                k=min(k, i);
	                l=max(l, i);
	            }
	        }
	        
	        for (int i=k; i<=l; i++){
	            if (s[i]=='0'){
	                c++;
	            }
	        }
	        cout<<c<<endl;
	        
	    }
	}

}
