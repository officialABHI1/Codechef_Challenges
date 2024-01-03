/* Problem Link :https://www.codechef.com/problems/CHRISDECOR */

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long int t;
	cin>>t;
	while(t--){
	    
	    long long int n,x,y,a,b,c,x1;
	    
	    cin>>n>>x>>y;
	    
	    a = min((y/3),x);
	    
	    x1 = x;
	    
	    b = (x-a)/2;
	    
	    c = x1/2;
	    
	  //  cout<<a<<" "<<b<<" "<<c<<endl;
	    
	    if(a+b>=n){
	        cout<<"YES"<<endl;
	    }
	    else if(c>=n)
	    {
	      cout<<"YES"<<endl;   
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	   
	    
	}
   return 0;
}
