#include <iostream>
#include <algorithm>
using namespace std;

int n,a,b;
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        int temp=__gcd(a,b);
        cout<<a*b/temp<<"\n";
    }
    return 0;
}