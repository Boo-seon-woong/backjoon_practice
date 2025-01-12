#include <iostream>
using namespace std;
int main(void){
    int a1, a2, a3, b1, b2, b3, a, b,c,d,e,f;
    cin>>a>>b;
    a1=a/100;
    a2=a/10%10;
    a3=a%10;
    b1=b/100;
    b2=b/10%10;
    b3=b%10;
    c=a*b3;
    d=a*b2;
    e=a*b1;
    f=a*b;
    printf("%d\n%d\n%d\n%d",c,d,e,f);
    return 0;
}