#include<bits/stdc++.h>
#define MAX 100
using namespace std;
void in(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t=1;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int dem=1;
		for(int i=0;i<n-1;i++){
			int min=i;
            for(int j=i+1; j<n ; j++){
                if(a[j]<a[min]) {
                    min=j;
                }
            }
            if(min !=i ){
                swap(a[i],a[min]);
            }
            cout<<"Buoc "<<dem<<": ";
            in(a, n);
            dem++;
		}
	}
}
