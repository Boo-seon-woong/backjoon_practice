#include <iostream>
using namespace std;

int main(void){
    int a,b;
    cin>>a>>b;
    while(a!=0){
        if(a>b&&a%b==0){
            printf("multiple\n");
        }else if(a<b&&b%a==0){
            printf("factor\n");
        }else printf("neither\n");
        cin>>a>>b;
    }
    return 0;
}