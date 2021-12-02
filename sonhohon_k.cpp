
#include <iostream>
#include<algorithm>
using namespace std;
int minSwap(int *arr, int n, int k) {
    int lonhon = 0;
    for (int i = 0; i < n; ++i){
        if (arr[i] <= k)
            lonhon++;
    }
    int bad = 0;
    for (int i = 0; i < lonhon; ++i){
        if (arr[i] > k)
            bad++;
    }
    int ans = bad;
    for (int i = 0, j = lonhon; j < n; ++i, ++j) {
        if (arr[i] > k)
            bad--;
        if (arr[j] > k)
            bad++;
        ans = min(ans, bad);
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n ; i++) cin>>a[i];
        cout<<minSwap(a, n, k)<<endl;
    }
}


