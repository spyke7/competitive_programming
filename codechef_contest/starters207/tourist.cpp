#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, a,b;
	    cin>>n>>a>>b;
	    int maxAns=1e9;
	    for (int i=0; i<n; i++){
	        int c,d;
	        cin>>c>>d;
	        int res1 = abs(c-a)+abs(d-b);
	        maxAns=min(res1, maxAns);
	    }
	    
	    cout<<maxAns<<endl;
	    
	    
	}

}
