#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,r=2;
    cin>>n;
    for(int i=0;i<n;i++){
        r+=r-1;
    }
    cout<<r*r<<endl;
    return 0;
}