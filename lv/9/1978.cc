#include <iostream>
using namespace std;

int main(void){
    int n,temp,result=0;
    cin>>n;
    for(int i=0;i<n;i++){
        //
        int s=0;
        cin>>temp;
        for(int j=2;j<temp;j++){
            if(temp%j==0){
                s=1;
                break;
            }
        }
        if(s==1||temp==1) continue;
        result++;
        //
    }
    cout<<result<<endl;
}