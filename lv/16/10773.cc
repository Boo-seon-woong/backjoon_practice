/*
첫 번째 줄에 정수 k가 주어짐

이후 k개의 줄에 정수가 1개씩 주어짐
정수는 0에서 10^6 값을 가지며 정수가 "0"일 경우에는 v.pop_back()

출력은 재민이가 최종적으로 적어 낸 수의 합을 출력한다.

-input
4
3
0
4
0

-output
0
*/

#include <iostream>
#include <vector>
using namespace std;
vector<long long> v;
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long n,temp;
    long long sum=0;
    cin>>n;
    for(long long i=0;i<n;i++){
        cin>>temp;
        if(temp==0){
            v.pop_back();
            continue;
        }
        v.push_back(temp);
    }
    for(long long j=0;j<v.size();j++){
        sum+=v[j];
    }
    cout<<sum<<endl;
    return 0;
}