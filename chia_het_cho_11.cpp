#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin>>t;
    while(t--){
       	string s;
        cin>>s;
        int s1=0,s2=0;
        for(int i=0;i<s.size();i++){
        	if(i%2==0) s1+=int(s[i]-'0');
        	else s2+=int(s[i]-'0');
		} 
		//cout<<s1<<" "<<s2<<endl ;
        if(abs(s2-s1)%11==0) cout<<"1"<<endl;
       	else cout<<"0"<<endl;
    }
}

