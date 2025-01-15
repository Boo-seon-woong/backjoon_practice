#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL),cout.tie(NULL);

    int n,len;
    char *str[11];
    cin>>n;
    for(int i=0;i<n;i++){
        str[i]= new char[1001];
        cin>>str[i];
    }
    for(int i=0;i<n;i++){
        len=strlen(str[i]);
        cout<<str[i][0]<<str[i][len-1]<<endl;
    }

    return 0;
}