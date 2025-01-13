#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    char s[1002];
    cin>>s;
    for(int i=0;i<1002;i++){
        if(s[i]==0){
            cout<<i;
            return 0;
        }
    }
    return 0;
}