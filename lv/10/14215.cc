#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int a[3],fir=0,sec=0,thi=0;
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    if(a[2]>=a[1]+a[0])printf("%d\n",2*(a[0]+a[1])-1);
    else printf("%d\n",a[0]+a[1]+a[2]);
    return 0;
}