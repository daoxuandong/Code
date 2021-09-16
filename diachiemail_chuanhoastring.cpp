#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
	string final="";
	stringstream ss;
	ss<<s;
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		v.push_back(tmp);
	}
	final+=v[v.size()-1];
	for(int i=0;i<v.size()-1;i++){
		final += v[i][0];
	}
	cout<<final<<"@ptit.edu.vn"<<endl;

}
