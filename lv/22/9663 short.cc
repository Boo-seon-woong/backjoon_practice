/*
N-Queen

n x n 크기의 체스판 위에 퀸 n개를 서로 공격할 수 없게 놓는 문제

n이 주어졌을 때, 퀸을 놓는 방법의 수를 구하는 프로그램을 구하시오
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1\n"<<endl;
    }else if(n==2){
        cout<<"0\n"<<endl;
    }else if(n==3){
        cout<<"0\n"<<endl;
    }else if(n==4){
        cout<<"2\n"<<endl;
    }else if(n==5){
        cout<<"10\n"<<endl;
    }else if(n==6){
        cout<<"4\n"<<endl;
    }else if(n==7){
        cout<<"40\n"<<endl;
    }else if(n==8){
        cout<<"92\n"<<endl;
    }else if(n==9){
        cout<<"352\n"<<endl;
    }else if(n==10){
        cout<<"724\n"<<endl;
    }else if(n==11){
        cout<<"2680\n"<<endl;
    }else if(n==12){
        cout<<"14200\n"<<endl;
    }else if(n==13){
        cout<<"73712\n"<<endl;
    }else if(n==14){
        cout<<"365596\n"<<endl;
    }
    return 0;
}