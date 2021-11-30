#include<bits/stdc++.h>
using namespace std;
int n,a[10];
bool unuse[100];
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!unuse[j]){
            a[i]=j;
            unuse[j]=true;
            if(i==n) in();
            else Try(i+1);
            unuse[j]=false;
        }
    }
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
    Try(1);
    cout<<endl;
	}
    
}
