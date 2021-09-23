#include<iostream>
#include <iomanip>
#include<algorithm>
using namespace std;
struct Time{
    int gio;
    int phut;
    int giay;
};
int main(){
    int n;
    cin>>n;
    Time a[n];
    long long total[10000];
    for(int i=0; i<n ; i++){
        scanf("\n");
        cin>>a[i].gio>>a[i].phut>>a[i].giay;
        total[i]=a[i].gio*3600+a[i].phut*60 + a[i].giay;
    }
    for(int i=0; i<n-1 ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(total[i]>total[j]) {
                    swap(a[i],a[j]);
                    swap(total[i],total[j]);
                }
            }
        }
    for(int i=0; i<n ; i++){
        cout<<a[i].gio<<" "<<a[i].phut<<" "<<a[i].giay;
        cout<<endl;
    }
    
}

