#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    char str[101];
    int len;
    cin>>str;
    len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            //printf("%c and %c\n",str[i],str[len-i-1]);
            cout<<0<<endl;
            return 0;
        }
    }
    cout<<1<<endl;
    return 0;
}