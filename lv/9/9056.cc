#include <iostream>
using namespace std;
int fac[10000];
void clean(void){
    for(int i=0;i<10000;i++){
        fac[i]=0;
    }
    return;
}

int main(void){
    int p,q,loc=1;
    cin>>p;
    while(p!=-1){
        int sum=0,loc=1;
        for(int i=1;i<p;i++){
            if(p%i==0){
                fac[loc]=i;
                loc++;
                sum+=i;
            }
        }
        if(sum==p){
            printf("%d = ",p);
            for(int i=1;i<loc-1;i++){
                cout<<fac[i]<<" + ";
            }
            cout<<fac[loc-1]<<"\n";
        } else printf("%d is NOT perfect.\n",p);
        cin>>p;
    }
    return 0;
}