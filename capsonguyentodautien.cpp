#include<iostream>
using namespace std;
typedef long long ll;
int mark[1000005]={0};
void sang(){
    for(int i=2; i*i< 1e6 ;i++){
        if(!mark[i]){
            for(int j=i*i ; j<1e6 ; j+=i){
                mark[j]=1;
            }
        }
    }
}
int main( ){
    int t;
    cin>>t;
    while(t--){
        sang();
        int n;
        cin>>n;
        if(n<4) cout<<"-1";
        int key=1;
        for(int i=2; i<=n/2 ; i++){
            if(mark[i]==0 && mark[n-i]==0) {
                cout<<i<<" "<<n-i;
                key=0;
                break;
            }
        }
        if(key) cout<<"-1";
        cout<<endl;
    }
    return 0;
}

