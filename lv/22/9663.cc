/*
N-Queen

n x n 크기의 체스판 위에 퀸 n개를 서로 공격할 수 없게 놓는 문제

n이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 구하시오
*/

#include <iostream>
#include <cmath>
using namespace std;
int arr[16];
int count=0;
bool check(int pos,int n);
void func(int size,int pos);
int main(void){
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    // 그 긴거
    int n;
    cin>>n;
    func(n,0);
    cout<<count<<endl;
    return 0;
}
bool check(int pos,int n){
    int result=true;
    for(int i=0;i<pos;i++){
        //대각선상에 있거나 같은 가로줄이면 x
        if(arr[i]==n||abs(i-pos)==abs(arr[i]-n)){
            result=false;
            break;
        }
    }
    return result;
}

void func(int size,int pos){
    if(size-1==pos){
        for(int i=0;i<size;i++){
            if(check(pos,i)==true){
                /*for(int j=0;j<size;j++){
                    cout<<arr[j]<<" ";
                }
                cout<<endl;*/
                count++;
            }
        }
    }else{
        for(int i=0;i<size;i++){
            if(check(pos,i)==true){
                arr[pos]=i;
                func(size,pos+1);
            }
        }
    }
    return;
}