/*
괄호 문자열 - "("와 ")"로만 구성된 문자열

그 중 괄호의 모양이 바르게 구성된 문자열을 올바른 괄호 문자열이라 한다


*/

#include <iostream>
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,state,len;
    string ps;

    cin>>n;
    for(int i=0;i<n;i++){
        //
        state=0;
        cin>>ps;
        len=ps.length();
        for(int j=0;j<len;j++){
            if(ps[j]=='(') state++;
            else state--;
            if(state<0){
                cout<<"NO\n";
                break;
            }
        }
        if(state==0) cout<<"YES\n";
        else if(state>0)cout<<"NO\n";
    }
    return 0;
}