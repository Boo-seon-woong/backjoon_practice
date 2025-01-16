#include <iostream>
using namespace std;

int arr[200][200],r=0;

void sketch(int a,int b){
    for(int i=a;i<a+10;i++){
        for(int j=b;j<b+10;j++){
            if(arr[i][j]==1){
            }else{
                r++;
                arr[i][j]=1;
            }
        }
    }
    return;
}

int main(void){
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        sketch(a,b);
        //printf("%d\n",r);
    }
    cout<<r<<endl;
    return 0;
}