#include <bits/stdc++.h> 
using namespace std;   
struct PhanSo{
    long long tu;
    long long mau;
};
long long gcm(long long A,long long B){
    if(A<0) A*=-1; 
    if(B<0) B*=-1; 
    if(B==0) return A;
    return gcm(B,A%B);
}
void rutgon(PhanSo &A){
    long long k=gcm(A.tu,A.mau);
    A.tu/=k;
    A.mau/=k;
}
void process(PhanSo a,PhanSo  b){
    PhanSo c,d;
    c.tu=(a.tu*b.mau+a.mau*b.tu)*(a.tu*b.mau+a.mau*b.tu);
    c.mau=(a.mau*b.mau)*(a.mau*b.mau);
    rutgon(c) ;
    d.tu=a.tu*b.tu*c.tu;
    d.mau=a.mau*b.mau*c.mau;
    rutgon(d);
    cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}