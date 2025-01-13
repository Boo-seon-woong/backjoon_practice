#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    char s[1002];
    int n;

    cin>>s>>n;
    cout<<s[n-1];

    return 0;
}