/*
수 n개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오

첫째 줄에 수의 개수 n과 합을 구해야 하는 횟수 m이 주어진다
둘째 줄에는 n개의 수가 주어진다
수는 1000보다 작거나 같은 자연수이다
셋째 줄부터 m개의 줄에는 합을 구해야 하는 구간 i와 j가 주어진다

총 m개의 줄에 입력으로 주어진 i번째 수부터 j번째 수까지 합을 출력한다
*/

#include <iostream>
using namespace std;
int n,m,a,b,arr[100001];
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    cin>>arr[1];
    for(int i=2;i<=n;i++){
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<m;i++){
        cin>>a>>b;
        cout<<arr[b]-arr[a-1]<<"\n";
    }
    //기본 입력 완료
    return 0;
}