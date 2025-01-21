#include <iostream>
#include <algorithm>
using namespace std;
int arr[50][50],w[50][50],b[50][50];
char temp[51];
void show(int a[][50],int n,int m){
    printf("\n\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return;
}


int main(void){
    int n,m;
    int w_min=64,b_min=64;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>temp;
        for(int j=0;j<m;j++){
            if(temp[j]=='W') arr[i][j]=1;
            else arr[i][j]=2;
        }
    }
    //show(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i+j)%2==0){
                if(arr[i][j]==1){
                    w[i][j]=1;
                    b[i][j]=0;
                }
                else{w[i][j]=0;b[i][j]=1;}
            }else{
                if(arr[i][j]==1){
                    w[i][j]=0;
                    b[i][j]=1;
                }
                else{w[i][j]=1;b[i][j]=0;}
            }
        }
    }
    //show(w,n,m);
    //show(b,n,m);

    for(int i=0;i<n-7;i++){
        for(int j=0;j<m-7;j++){
            int temp1=0,temp2=0;
            for(int a=i;a<i+8;a++){
                for(int c=j;c<j+8;c++){
                    temp1+=w[a][c];
                    temp2+=b[a][c];
                }
            }
            if(temp1<w_min) w_min=temp1;
            if(temp2<w_min) w_min=temp2;
        }
    }
    printf("%d\n",w_min);
    return 0;
}