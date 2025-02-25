/*
문자열에서 특정 알파벳이 몇 번 나타나는지 알아봐서 자주 나타나는 알파벳이 중지나 검지 위치에 오는 알파벳인지 확인하면 실용적인지 알 수 있을 것이다

특정 문자열 s, 특정 알파멧 a와 문자열의 구간 [l,r]이 주어지면 s의 l번째 문자부터 r번째 문자 사이에 a가 몇번 나타나는지 구하는 프로그램을 작성하여라

승재는 문자열의 문자는 0번째부터 세며, l번째와 r번째 문자를 포함해서 생각한다

문자열의 길이는 20만자 이하이며 알파벳 소문자로만 구성됨

seungjaehwang
4
a 0 5
a 0 6
a 6 10
a 7 10

0
1
2
1
*/

#include <iostream>
#include <vector>
using namespace std;
string str;
int n,m,a,b,temp,len;
char temp_a;
vector<int> v[26];
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>str;
    cin>>n;
    len=str.length();
    for(int i=0;i<26;i++){
        v[i].push_back(0);
    }
    for(int i=0;i<len;i++){
        temp=str[i]-'a';
        for(int i=0;i<26;i++){
            if(i==temp) v[i].push_back(v[i].back()+1);
            else v[i].push_back(v[i].back());
        }
    }
    for(int i=0;i<n;i++){
        cin>>temp_a>>a>>b;
        temp_a-='a';
        cout<<v[temp_a][b+1]-v[temp_a][a]<<"\n";
    }
    return 0;
}