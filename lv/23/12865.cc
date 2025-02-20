#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001]; // 1차원 배열 사용
int n, k;
int w,v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>w>>v;
        for(int j=k;j>=w;j--){
            dp[j]=max(dp[j],dp[j-w]+v);
        }
    }
    cout<<dp[k]<<endl;
    return 0;
}
