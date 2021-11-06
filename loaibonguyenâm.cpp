#include<bits/stdc++.h>
using namespace std;
char thuong(char s){
	if(s>='A'&&s<='Z'){
		s+=32;
	}
	return s;
}
bool check(char s){
    
         if(s=='A'||s=='a' || s=='E' || s=='e' || s=='I' || s=='i' || s=='O' || s=='o' ||s=='U' ||s=='u'||s=='Y' ||s=='y' ){
        return false;
    }
    return true;
}
int main() {
	string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(check(s[i] )) cout<<"."<<thuong(s[i]);
}
   }

		





