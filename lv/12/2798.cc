#include <iostream>
using namespace std;

int main(void){
    //ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n,m,arr[101]={0,},max=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //default input

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int temp=arr[i]+arr[j]+arr[k];
                //printf("%d %d %d %d\n",i,j,k,temp);
                if(temp>max&&temp<m) {
                    max=temp;
                }
                else if(temp==m) {
                    cout<<m<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<max<<endl;
    return 0;
}