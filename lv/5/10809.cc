#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL),cout.tie(NULL);

    char s[101];
    int l,check=0;
    cin>>s;
    l=strlen(s);
    for(int i=0;i<26;i++){
        for(int j=0;j<l;j++){
            if((int)s[j]==i+97){
                cout<<j<<" ";
                check=1;
                break;
            }
        }
        if(check==1){
            check=0;
        } else{
            cout<<"-1 ";
        }
    }
    return 0;
}