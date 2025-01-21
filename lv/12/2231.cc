#include <iostream>
using namespace std;
int arr[10];
void clean(void){
    for(int i=0;i<10;i++){
        arr[i]=0;
    }
    return;
}
int decomp(int n){
    int i=0,sum=0;
    clean();
    while(n!=0){
        arr[i]=n%10;
        n/=10;
        i++;
    }
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(void){
    //ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,result=0;
    cin>>n;
    for(int i=n-54;i<n;i++){
        int temp=i+decomp(i);
        if(temp==n){
            printf("%d\n",i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}