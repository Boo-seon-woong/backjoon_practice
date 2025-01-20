#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    long long sum=0;
    long long n;
    cin>>n;
    for(int i=1;i<n;i++){
        sum+=n-i;
    }
    printf("%Ld\n2",sum);
    return 0;
}