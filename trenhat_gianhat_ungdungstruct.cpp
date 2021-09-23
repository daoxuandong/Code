#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
struct Nguoi{
    string ten,ngay,thang,nam;
};
int main(){
	int t;cin>>t;
	cin.ignore();
	Nguoi a[t];
	int i=0;
	vector<string> ss;
	string s1,s2;
	while(t--){
		cin>>s1>>s2;
		string res="";
		for(int i=0;i<s2.size();i++){
			if(s2[i]!='/'){
				res+=s2[i];
			}
			else{
				ss.push_back(res);
				res="";
			}
			if(i==s2.size()-1) ss.push_back(res);
		}
		a[i].ten=s1;
		a[i].ngay=ss[0];
		a[i].thang=ss[1];
		a[i].nam=ss[2];
		i++;
		ss.clear();
	}
	for(int j=0;j<i-1;j++){
		for(int k=j+1;k<i;k++){
			if(a[j].nam>a[k].nam){
				swap(a[j],a[k]);
			} 
			else if(a[j].nam==a[k].nam){
				if(a[j].thang>a[k].thang){
					swap (a[j],a[k]);
				} 
				else if(a[j].thang==a[k].thang){
					if(a[j].ngay>a[k].ngay){
						swap(a[j],a[k]);
					} 
				}
			}
		}
	}
	cout<<a[i-1].ten<<endl;
	cout<<a[0].ten<<endl;
}
