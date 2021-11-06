#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
    while(t--){
        long long s;
        cin>>s;
        int a[20],k=0;
        bool ok=true;
        while(s!=0){
        	a[k++]=s%10;
        	s/=10;
		}
        for(int i=0;i<k-1;i++){
        	if(abs(a[i]-a[i+1])!=1){
				cout<<"NO"<<endl;	
	        	 ok=false;
				 break;
			}
	     }
        
    if(ok==true) cout<<"YES"<<endl;
    
    }
    return 0;
}
