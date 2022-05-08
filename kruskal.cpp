#include<iostream> 
#define MAX 100
using namespace std;
typedef struct{
    int     dau, cuoi, c;
} edge;
class   graph{
    int     n, A[MAX][MAX], chuaxet[MAX], ne, AT[MAX][MAX], neT, dH;
    edge    G[MAX], T[MAX];
    public:
    void    readdata();
    void    bubblesort();
    void    init(){ for(int i=1; i<=n; i++) chuaxet[i]=1;   };
    void    dfsT(int u);
    void    kruskal();
};
void    graph::readdata(){
    cin>>n;
    ne=0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++){
            cin>>A[i][j];
            if(A[i][j]!=0 && i<j){
                ne++;
                G[ne].dau=i;    G[ne].cuoi=j;   G[ne].c=A[i][j];
            }
        }
}
void    graph::bubblesort(){
    for(int i=ne; i>=1; i--){
        for(int j=1; j<i; j++){
            if(G[j].c>G[j+1].c){
                edge    tmp=G[j];   G[j]=G[j+1];    G[j+1]=tmp;
            }
        }
    }
}
void    graph::dfsT(int u){ //Duyet tren cay
    chuaxet[u]=0;
    for(int v=1; v<=n; v++)
        if(AT[u][v]!=0 && chuaxet[v]==1) dfsT(v);
}
void    graph::kruskal(){
    //Buoc 1: Khoi tao
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) AT[i][j]=0;
    neT=0;
    dH=0;
    //Buoc 2: Sap xep
    bubblesort();
    //Buoc 3: lap (chon canh)
    for(int e=1; e<=ne; e++){
        //Kiem tra viec them canh e == (G[e].dau, G[e].cuoi) vao cay co tao nen chu trinh ko?
        init();
        dfsT(G[e].dau);
        //if((chuaxet[G[e].dau]+chuaxet[G[e].cuoi])!=0){
        if(chuaxet[G[e].cuoi]==1){
            neT++;
            T[neT].dau=G[e].dau;    T[neT].cuoi=G[e].cuoi;   T[neT].c=G[e].c;
            AT[G[e].dau][G[e].cuoi]=AT[G[e].cuoi][G[e].dau]=1;
            dH=dH+G[e].c;
        }
    }
    if(neT!=n-1)    cout<<"Do thi khong lien thong\n";
    else{
        cout<<"dH = "<<dH<<"\n";
        for(int i=1; i<=neT; i++)
            cout<<T[i].dau<<" "<<T[i].cuoi<<"\n";
    }
}
int main(){
    graph   g; g.readdata(); g.kruskal(); //cout<<"OK\n";
}
