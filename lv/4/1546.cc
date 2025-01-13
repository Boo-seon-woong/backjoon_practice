#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    float n,arr[1000],max=0,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]>max) max=arr[i];
    }
    float result=sum/max*100/n;
    cout<<result;
    return 0;
}