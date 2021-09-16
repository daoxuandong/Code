#include<bits/stdc++.h>
using namespace std;
long long gcm(long long A, long long B) {
    if (B == 0)
        return A;
    return gcm(B, A%B);
}
typedef struct PhanSo{
    long long tu;
    long long mau;
};
void nhap(struct PhanSo &p){
    cin>>p.tu>>p.mau;
}
void rutgon(struct PhanSo &p){
    long long tmp=gcm(p.tu, p.mau);
    p.tu/=tmp;
    p.mau/=tmp;
}
void in(struct PhanSo p){
    cout<<p.tu<<"/"<<p.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


