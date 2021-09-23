#include <iostream>
#include <iomanip>
using namespace std;
struct sinhvien{
    string ma;
    string ten;
    string lop;
    double x,y,z;
};
int main(){
    int n;
    cin>>n;
    sinhvien a[n];
    for(int i=0; i<n ; i++){
	scanf("\n");
		getline(cin,a[i].ma);
		getline(cin,a[i].ten);
        getline(cin,a[i].lop);
        cin>>a[i].x>>a[i].y>>a[i].z;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].ma.compare(a[j].ma)>0) {
                swap(a[i],a[j]);
            }
		}
	}
	for(int i=0;i<n;i++){
		cout<<i+1<<" ";
		cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<setprecision(1)<<fixed<<a[i].x<<" "<<a[i].y<<" "<<a[i].z;
		cout<<endl;
	}
}

