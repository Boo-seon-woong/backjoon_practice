#include <iostream>
using namespace std;
int fac[10000];
int main(void){
    int p,q,loc=1;
    cin>>p>>q;
    for(int i=1;i<=p;i++){
        if(p%i==0){
            fac[loc]=i;
            loc++;
        }
    }
    if(fac[q]!=0) cout<<fac[q]<<endl;
    else cout<<0<<endl;
    return 0;
}