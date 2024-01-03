/* Problem link: https://www.codechef.com/problems/APLUSB*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int a[n], b[n] , c[n]={0};
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    
	    sort(a,a+n);
	    
	    sort(b,b+n);
	    
	    int flag =0;
	    
	    for(int i=0,j=n-1;i<n&&j>=0;i++,j--){
	        c[i] = a[i]+b[j];
	    }
	    
	    int k = c[0];
	    for(int i=0;i<n;i++){
	        if(c[i]!=k){
	            flag++;
	            break;
	        }
	    }
	    
	    if(flag){
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        for(int i=0;i<n;i++){
	          cout<<a[i]<<" ";
	         }
	         
	         cout<<endl;
	    
	        for(int j=n-1;j>=0;j--){
	            cout<<b[j]<<" ";
	         }
	          cout<<endl;
	    }
	    
	    
	}

}
