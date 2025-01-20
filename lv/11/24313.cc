#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    long long sum=0;
    long long n;
    cin>>n;
    for(int i=1;i<n-1;i++){
        sum+=(n-i)*(n-i-1)/2;
    }
    printf("%Ld\n3",sum);
    return 0;
}