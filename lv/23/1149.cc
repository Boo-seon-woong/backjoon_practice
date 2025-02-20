/*
rgb거리에는 집이 n개 있다. 거리는 선분으로 나타낼 수 있고, 1번 집부터 n번 집이 순서대로 있다

집은 빨강, 초록, 파랑 중 하나의 색으로 칠해야 한다. 각각의 집을 빨강, 초록, 파랑으로 칠하는 비용이 주어졌을 때, 아래 규칙을 만족하면서 모든 집을 칠하는 비용의 최솟값

인접한 집의 색과 같지 않아야 한다
(aka 삼색정리)

3
26 40 83
49 60 57
13 89 99

96

*/
#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001][3];
int sum[1001][3];
int n,temp_r,temp_g,temp_b;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    //입력
    sum[0][0]=arr[0][0];
    sum[0][1]=arr[0][1];
    sum[0][2]=arr[0][2];
    for(int i=1;i<n;i++){
        temp_r=sum[i-1][0];
        temp_g=sum[i-1][1];
        temp_b=sum[i-1][2];
        if(temp_g<temp_b){
            sum[i][0]=temp_g+arr[i][0];
        }else sum[i][0]=temp_b+arr[i][0];
        if(temp_r<temp_b){
            sum[i][1]=temp_r+arr[i][1];
        }else sum[i][1]=temp_b+arr[i][1];
        if(temp_r<temp_g){
            sum[i][2]=temp_r+arr[i][2];
        }else sum[i][2]=temp_g+arr[i][2];
    }
    cout<<min(min(sum[n-1][0],sum[n-1][1]),sum[n-1][2])<<endl;
    return 0;
}