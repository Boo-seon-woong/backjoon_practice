#include <iostream>
#include <algorithm>
using namespace std;

long long a1,a2,b1,b2;
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>a1>>a2>>b1>>b2;
    long long temp=__gcd(a2,b2);
    long long w1=b2/temp;
    long long w2=a2/temp;
    long long r1 = a1*w1+b1*w2;
    long long r2 = a2*b2/temp;
    long long temp2=__gcd(r1,r2);
    cout<<r1/temp2<<" "<<r2/temp2<<endl;
    return 0;
}