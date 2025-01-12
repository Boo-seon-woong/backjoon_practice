#include <iostream>
using namespace std;

int main(void){
    int a,b,c;
    cin>>a>>b>>c;

    if(a==b &&a==c){
        cout<<10000+a*1000;
        return 0;
    }
    if(a==b){
        cout<<1000+a*100;
        return 0;
    }
    if(a==c){
        cout<<1000+a*100;
        return 0;
    }
    if(c==b){
        cout<<1000+c*100;
        return 0;
    }
    if(a>b && a>c){
        cout<<a*100;
        return 0;
    }
    if(b>a && b>c){
        cout<<b*100;
        return 0;
    }
    if(c>a && c>b){
        cout<<c*100;
        return 0;
    }
    return 0;
}