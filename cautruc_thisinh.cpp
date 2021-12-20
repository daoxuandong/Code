#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
		string ten;
	string ngaysinh;
	double 	x,y,z;
};
void nhap(ThiSinh &p){
	getline(cin,p.ten);
	cin>>p.	ngaysinh;
	cin>>p.x>>p.y>>p.z;
}
void in(ThiSinh p){
	cout<<p.ten<<" "<<p.ngaysinh<<" "<<setprecision(1)<<fixed<<p.x+p.y+p.z;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


