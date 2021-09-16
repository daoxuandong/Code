#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		fflush(stdin);
		string s;cin>>s;
		for(int i=0;i<s.size();i++){
			bool check=false;
			for(int j=0;j<s.size();j++){
				if(s[i]==s[j] &&i!=j){
					check=true;
					break;
				}
			}
			if(check) continue;
			else cout<<s[i];
		}
		cout<<endl;
	}
}
