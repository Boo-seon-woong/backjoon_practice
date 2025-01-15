#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL),cout.tie(NULL);

    char str[1000];
    int n,sum=0;
    cin>>n>>str;
    for(int i=0;i<n;i++){
        sum+=(int)str[i]-48;
    }
    cout<<sum;
    return 0;
}