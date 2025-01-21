#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int a,b,c,d,e,f;
    int r1,r2;
    cin>>a>>b>>c>>d>>e>>f;
    r2=(c*d-a*f)/(b*d-a*e);
    if(a!=0) r1=(c-b*r2)/a;
    else r1=(f-e*r2)/d;
    printf("%d %d\n",r1,r2);
    return 0;
}