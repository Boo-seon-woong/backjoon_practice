//주석은 그냥 천천히 출력되는게 예뻐서 달았음

#include <iostream>
//#include <unistd.h>
using namespace std;

void star(int n,int m);


int main(void){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        star(n-i-1,2*i);
    }
    for(int j=1;j<n;j++){
        star(j,2*n-2*(j+1));
    }
    return 0;
}

void star(int n,int m){
    for(int i=0;i<n;i++){
        cout<<" ";
    }
    for(int j=0;j<m+1;j++){
        cout<<"*";
    }
    cout<<endl;
    //usleep(100000);
    return;
}