/*Problem Link: https://www.codechef.com/problems/CHOCDISTRIB */

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int n;
	    cin>>n;
	    
	    if(n==1){
	        cout<<"1 1"<<endl;
	    }
	    else if(n%2!=0)
	    {
	        cout<<min(n,(n/2+1))<<" "<<max(n,(n/2+1))<<endl;
	    }
	    else 
	    {
	        cout<<min(n,(n/2))<<" "<<max(n,(n/2))<<endl;
	    }
	    
	}

}
