#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		//cin>>("\n");
		string s;
		cin>>s;
		getline(cin,s);
		stringstream ss;
		ss<<s;
		vector<string> v;
		while(ss>>s){
			v.push_back(s);
		}
		cout<<v.size()+1<<endl;
	}
}
