#include <iostream>
#include <algorithm>
using namespace std;

long long n,a,b;
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>a>>b;
    long long temp=__gcd(a,b);
    cout<<a*b/temp<<"\n";
    return 0;
}