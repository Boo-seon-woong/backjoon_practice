/*

*/
#include <iostream>
using namespace std;
int arr[100002];
int lef[100002];
int sum,l_pos,r_pos;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,temp_l,temp_r,temp,max=-200000000;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    lef[1]=arr[1];
    for(int i=2;i<=n+1;i++){
        lef[i]=lef[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n+2;j++){
            if(j>i){
                temp=lef[j]-lef[i];
                //printf("(%d %d) %d %d\n",i,j,lef[i],lef[j]);
                if(temp>max){
                    //printf("check\n");
                    l_pos=i;r_pos=j;
                    max=temp;
                }
            }
        }
    }
    printf("%d\n",max);
    return 0;
}