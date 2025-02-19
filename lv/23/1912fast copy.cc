/*

*/
#include <iostream>
using namespace std;
int arr[100001];
int lef[100001];
int rig[100001];
int sum,l_pos,r_pos;

int main(void){
    int n,temp_l,temp_r,temp,min=200000000;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    lef[0]=arr[0];temp_l=arr[0];
    rig[n-1]=arr[n-1];temp_r=arr[n-1];
    for(int i=1;i<n;i++){
        lef[i]=lef[i-1]+arr[i];
        rig[n-1-i]=rig[n-i]+arr[n-1-i];
    }
    for(int i=0;i<10;i++){
        printf("%d %d\n",lef[i],rig[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=2;j<n;j++){
            if(j>i+1){
                temp=lef[i]+rig[j];
                printf("temp: %d,lef[%d]=%d,rig[%d]=%d\n",temp,i,lef[i],j,rig[j]);
                if(temp<min){
                    printf("check\n");
                    l_pos=i;r_pos=j;
                    min=temp;
                }
            }
        }
    }
    printf("\n result %d %d\n",l_pos,r_pos);
    return 0;
}