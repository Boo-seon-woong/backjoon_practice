/*
n m 주어졌을 때 
*/
#include <iostream>
using namespace std;
int arr[60];
int n,m,count=0;
void cal(int len,int loc);
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        arr[i]=i;
    }
    cal(m,0);
    cout<<"count: "<<count<<endl;
    return 0;
}
void cal(int len,int loc){
    if(len==loc){
        while(arr[loc]<=n){
            for(int i=1;i<=len;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            arr[loc]++;
            count++;
        }
    }
    else{
        while(arr[loc+1]<=n-len+loc+1){
            for(int i=loc+1;i<=len;i++){
                arr[i+1]=arr[i]+1;
            }
            cal(len,loc+1);
            arr[loc+1]++;
        }
    }
    return;
}