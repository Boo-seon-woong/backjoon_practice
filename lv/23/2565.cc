/*
전깃줄의 개수는 100 이하의 자연수

둘째 줄부터 ㅇ녀결되는 위치의 번호
위치의 번호는 500 이하의 자연수
같은 위치에 두 개 이상의 전깃줄이 연결될 수 없음

첫째 줄에 남아있는 모든 전깃줄이 서로 교차하지 않게 하기 위해 없애야 하는 전깃줄의 최소 개수를 구하여라라
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v;
vector<int> lis;
int n;
int main(void){
    int temp_a,temp_b,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp_a>>temp_b;
        v.push_back(make_pair(temp_a,temp_b));
    }
    int lis_len=0;
    sort(v.begin(),v.end());
    lis.push_back(2000);
    for(int i=0;i<n;i++){
        temp=v[i].second;
        if(lis.back()<temp) lis.push_back(temp);
        else{
            for(int j=0;j<lis.size();j++){
                if(temp<lis[j]) {
                    lis[j]=temp;
                    break;
                }
            }
        }
    }
    cout<<n-lis.size()<<endl;
    return 0;
}