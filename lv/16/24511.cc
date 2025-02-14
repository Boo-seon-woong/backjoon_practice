/*
queuestack의 구조

1,2,,,,n번의 자료구조가 나열되어있으며 각각의 자료구조에는 한 개의 원소가 들어있다.ADJ_FREQUENCY

작동방식
x0을 입력받는다
x0를 1번 자료구조에 삽입한 뒤 1번 자료구조에서 원소를 pop한다. 그때 pop된 원소를 x1 이라 한다.
x1을 2번 자료구조에 삽입한 뒤 2번 자료구조에서 원소를 pop한다. 그때 pop된 원소를 x2라 한다.
......
xn을 리턴한다
도현이는 길이 m의 수열 c를 가져와서 수열의 원소를 앞에서부터 차례대로 queuestack에 삽입할 것이다.

4
0 1 1 0
1 2 3 4

3
2 4 7



4 1 2
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int> result,input,ans;
int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,m,temp;
    bool arr[100001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>temp;
        if(arr[i]==0){
            input.push_back(temp);
        }
    }
    int size=(int)input.size();
    for(int i=0;i<size;i++){
        result.push_back(input[size-1-i]);
    }

    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp;
        result.push_back(temp);
        ans.push_back(result[i]);
    }
    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}