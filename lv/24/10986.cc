/*
수 n개가 주어진다
연속된 부분 구간의 합이 m으로 나누어 떨어지는 구간의 개수를 구하는 프로그램을 작성하시오

첫째 줄에 n과 m이 주어진다

둘째 줄에 n개의 수가 주어진다, 수가 충분히 크기 때문에 단위는 long long으로 잡는 것이 좋을 것으로 보인다
ㄴ 그게 아니라 입력값을 미리 m으로 한번 나눈 후 받는 게 나을듯;;
ㄴㄴ 헛소리하지마라 이거때매 long long 안썼다가 1시간 뻘짓하고 자료형 바꾸니까 해결되더라 미친거아냐
첫째 줄에 연속된 부분 구간의 합이 m으로 나누어 떨어지는 구간의 개수를 출력한다
*/

#include <iostream>
#include <vector>
using namespace std;
int n,m,temp;
long long count=0;
vector<int> v;
long long arr[1000];
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    cin>>n>>m;
    v.push_back(0);
    for(int i=0;i<n;i++){
        cin>>temp;
        temp=(v.back()+temp)%m;
        v.push_back(temp);
        arr[temp]++;
    }
    arr[0]++;
    for(int i=0;i<m;i++){
        count+=arr[i]*(arr[i]-1)/2;
    }
    cout<<count<<"\n";
    return 0;
}