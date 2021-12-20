#include<bits/stdc++.h>
using namespace std;
struct Point{
    double x,y;
};
void input(Point &p){
    cin>>p.x>>p.y;
}
double distance(Point &A,Point &B){
	double tmp=(sqrt(abs(A.x-B.x)*abs(A.x-B.x)+ abs(A.y-B.y)* abs(A.y-B.y)));
	return tmp;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
