#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,m,r=0;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cin>>m;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            r+=1;
        }
    }
    cout<<r;
    return 0;
}