#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL),cout.tie(NULL);
    int len,r=0,temp=0,plus=0;
    string str;
    getline(cin,str);
    len=str.length();
/*
공백이 아닐 시 - temp = 1;
공백일 시 - r++ temp=0;
문장이 끝날 시 - if temp==1 then r++
*/
    for(int i=0;i<len;i++){//글자수 만큼 for문
        if(str[i]!=' '){
            temp=1;
        }
        else{
            if(temp==1) r++;
            temp=0;
        }
    }
    if(temp==1){
        r++;
    }
    cout<<r<<endl;
    return 0;
}