#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long sum=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] == '1'){
                int k=s.size()-i-1;
                if(k%4 == 0)
                    sum+=1;
                if(k%4 == 1)
                    sum+=2;
                if(k%4 == 2)
                    sum+=4;
                if(k%4 == 3)
                    sum+=3;
            }
    }
        if(sum%5 == 0 && sum!=0 ) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

