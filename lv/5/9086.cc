//밥먹어야해서여기까지함

#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    char * s[1002];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>*s[i];
    }
    for(int i=0;i<n;i++){
        cout<<s[i][0]<<endl;
    }
    return 0;
}