/*
베라는 상의 n벌과 하의 n벌이 있다. i 번째 상의와 i번째 하의는 모두 색상 i를 가진다. n 개의 색상은 모두 서로 다르다.ADJ_FREQUENCY

상의와 하의가 서로 다른 색상인 조합은 총 몇가지인가?


input
2
output
2


5/20
*/

#include <iostream>
using namespace std;

int main(void){
    int n;
    cin>>n;
    cout<<n*(n-1);
    return 0;
}