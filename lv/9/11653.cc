#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        while(n%i==0){
            cout<<i<<"\n";
            n/=i;
        }
    }
    return 0;
}