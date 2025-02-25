/*
정수 수열(온도)
며칠동안 온도의 합이 가장 큰 연속적 값

10 2
3 -2 -4 -9 0 3 7 13 8 -3
*/

#include <iostream>
using namespace std;
int n,m,temp,len,arr[100001],sum[100001];
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max=-100000000;
    cin>>n>>m;
    cin>>arr[1];
    for(int i=2;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    len=n-m+1;
    for(int i=0;i<len;i++){
        temp=arr[i+m]-arr[i];
        if(temp>max) max=temp;
    }
    //기본 입력 완료
    cout<<max<<endl;
    return 0;
}