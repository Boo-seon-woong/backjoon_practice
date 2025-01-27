//246912 21787
#include <iostream>
#include <algorithm>
using namespace std;
int arr[246920];
int prime[21787];
int check(int n);
int temp,num=0;
void clear(){
    for(int i=0;i<246920;i++){
        arr[i]=1;
    }
    arr[0]=0;
    arr[1]=0;
    return;
}
int count(int min,int max);
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    clear();
    for(int i=2;i<=246912;i++){
        if(arr[i]==1){
            check(i);
            prime[num]=i;
            num++;
        }
    }
    while(1){
        cin>>temp;
        if(temp==0){return 0;}
        printf("%d\n",count(temp,temp*2));
    }

    return 0;
}
int check(int n){
    for(int i=2;i*n<246920;i++){
        arr[i*n]=0;
    }
    return 0;
}
int count(int min,int max){
    int result=0;
    for(int i=0;i<21787;i++){
        if(prime[i]>min&&prime[i]<=max){
            result++;
        }
    }
    return result;
}