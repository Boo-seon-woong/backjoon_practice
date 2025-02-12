//1번부터 n번까지 n명의 사람이 원을 이루면서 앉아있고, 양의 정수 k가 주어진다.

/*
순서대로 k번째 사람을 제거한다.
한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다.
이 과정은 n명의 사람이 모두 제거될 때 까지 계속한다.
원에서 사람들이 제거되는 수넛를 (n,k) 요제푸스 순열이라고 한다.
예를 들어 (7,3) 요제푸스 순열은 <3,6,2,7,5,1,4>다.
1 2 3 4 5 6 7state+=
7 3
//<3, 6, 2, 7, 5, 1, 4>
size: 현재 인원 크기
state: 현재 위치
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int> circle,result;
int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,k,state,size;
    cin>>n>>k;
    state=k-1;size=n;
    for(int i=0;i<n;i++){
        circle.push_back(i+1);
    }
    for(int i=1;i<n;i++){
        //state번째를 result에 넣고 circle에서 제거
        result.push_back(circle[state]);
        circle.erase(circle.begin()+state);

        size--;
        state=(state+k-1)%size;
    }
    result.push_back(circle[state]);
    cout<<"<";
    for(int i=0;i<n-1;i++){
        cout<<result[i]<<", ";
    }
    cout<<result[n-1]<<">"<<endl;
    return 0;
}