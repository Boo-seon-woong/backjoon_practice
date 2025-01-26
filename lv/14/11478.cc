/*
주목점) map의 자동 정렬 기능이 별로 중요하지 않고 중복제거의 특성만 이용할 것이라면 unordered_map을 이용하는 것이 더 실행 속도가 빠를 수 있다.

문자열 S가 주어졌을 때, 서로 다른 부분 문자열의 개수를 구하는 프로그램을 작성하시오

-input
ababc

-output
12
*/

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int len,res=0;
string str;
unordered_map<string,int> m;

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>str;
    len=str.length();

    for(int i=1;i<len;i++){
        //길이가 i 인 문자열
        for(int j=0;j<=len-i;j++){
            string temp=str.substr(j,i);
            if(m[temp]==1) continue;
            else {
                //cout<<j<<" "<<i<<" "<<temp<<"\n";
                m[temp]=1;
                res++;
            }
        }
    }
    cout<<res+1<<endl;
    return 0;
}