/*
enter는 새로운 사람이 채팅방에 입장했음을 나타냄
그 외는 채팅을 입력한 유저의 닉네임을 나타냄
닉네임은 숫자 또는 영문 대소문자로 구성되어 있음

새로운 사람이 입장한 이후 처음 채팅을 입력하는 사람은 반드시 곰곰티콘으로 인사를 한다. 그 외의 기록은 곰곰티콘을 쓰지 않은 평범한 채팅 기록이다
채팅 기록 중 곰곰티콘이 사용된 횟수를 구해보자

첫 번째 줄에는 채팅방의 기록 수를 나타내는 정수 n이 주어짐
두 번째 ㅜㅈㄹ부터 n개의 줄에 걸쳐 새로운 사람의 입장을 나타내는 enter, 혹은 채팅을 입력한 유저의 닉네임이 문자열로 주어진다

첫 번째 주어지는 문자열은 무조건 enter이다

채팅 기록 중 곰곰티콘이 사용된 횟수를 출력하시오
*/

#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<string,int> m;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,count=0,hz=0;
    string temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;//일단 무지성 temp 입력
        if(temp=="ENTER"){
            hz++;
        }
        else{
            if(m[temp]==hz){//latest_enter 이후 이미 입력한 시
                continue;
            }else{//latest_enter 이후 첫 채팅일 시
                m[temp]=hz;
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}