#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL),cout.tie(NULL);

    char* s[1001];
    int n,temp,len,s_n[1001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s_n[i];//숫자 받기
        s[i] = new char[21];//문자 받기
        cin>>s[i];
        len=strlen(s[i]);//길이 측정
        //cout<<"len is "<<len<<endl;
        for(int j=0;j<len;j++){//길이 만큼 for 문
            for(int k=0;k<s_n[i];k++){
                cout<<s[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}