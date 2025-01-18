#include <iostream>
using namespace std;

int main(void){
    int a,b,c,d,n[4];
    cin>>a>>b>>c>>d;
    n[0]=a;n[1]=c-a;n[2]=b;n[3]=d-b;
    int min=1000;
    for(int i=0;i<4;i++){
        if(n[i]<min){
            min=n[i];
        }
    }
    printf("%d\n",min);
    return 0;
}