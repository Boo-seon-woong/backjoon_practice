/*
n m 주어졌을 때 
*/
#include <iostream>
using namespace std;
int num[10];
void show_num(int len){
    for(int i=1;i<=len;i++){
        cout<<num[i]<<" ";
    }
    cout<<"\n";
    return;
}
void func(int max,int len,int loc){
    if(loc==len){
        for(int i=1;i<=max;i++){
            num[loc]=i;
            show_num(len);
        }
    }
    else{
        for(int i=1;i<=max;i++){
            num[loc]=i;
            func(max,len,loc+1);
        }
    }
    return;
}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    func(n,m,1);
    return 0;
}