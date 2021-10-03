#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
    string name,lop,date;
    float gpa;
};
void nhap(SinhVien ds[50],int n){
    for(int i=0;i<n;i++){
        string nm="";
        scanf("\n");
        getline(cin,nm);
        stringstream ss(nm);
        string token="";
        while(ss>>token){
            transform(token.begin(),token.end(),token.begin(),::tolower);
            token[0]=toupper(token[0]);
            ds[i].name+=token+" ";
        }
        cin>>ds[i].lop;
        cin>>ds[i].date;
        cin>>ds[i].gpa;
        string res=ds[i].date;
        if(res[1]<'0'||res[1]>'9') res='0'+res;
        if( res[4] < '0' || res[4] > '9' ) res.insert(3,"0");
        ds[i].date = res ;
    }
}
void in(SinhVien ds[],int n){
    for(int i=0;i<n;i++){
        if(i<9){
            cout<<"B20DCCN00"<<i+1<<" "<<ds[i].name<<" "<< ds[i].lop<<" "<<ds[i].date<<" ";
            printf("%.2f",ds[i].gpa);
            cout<<endl;
        }
        else{
           cout<<"B20DCCN0"<<i+1<<" "<<ds[i].name<<" "<< ds[i].lop<<" "<<ds[i].date<<" ";
            printf("%.2f",ds[i].gpa);
            cout<<endl;
        }
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
