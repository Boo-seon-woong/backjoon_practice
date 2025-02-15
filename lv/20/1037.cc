/*
양수 a 가 n의 진짜 약수가 되려면, n이 a의 배수이고 a 가 1과 n이 아니어야 한다. 어떤 수 n의 진짜 약수가 모두 주어질 때, n을 구하는 프로그램을 작성하시오

input
2
4 2
output
4

input
6
3 4 2 12 6 8
output
24
*/

#include <iostream>
using namespace std;

int main(void){
    int n,min,max,temp;
    cin>>n;
    cin>>temp;min=temp;max=temp;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        if(temp>max) max=temp;
        if(temp<min) min=temp;
    }
    int result=min*max;
    //printf("min:%d, max:%d, result:%d\n",min,max,result);
    cout<<result<<endl;
    return 0;
}