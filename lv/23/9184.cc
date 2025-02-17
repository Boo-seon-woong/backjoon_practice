#include <iostream>
using namespace std;
//w(1,1,0) + w(1,0,0) + w(1,0,1)
//w(0,1,1) + w(0,0,1) + w(0,1,0) - w(0,0,0)
int arr[21][21][21],temp;
int w(int a,int b,int c){
    if((a<=0||b<=0)||c<=0){
        return 1;
    }else if((a>20||b>20)||c>20){
        return arr[20][20][20];
    }
    if(a<b&&b<c){
        if(arr[a][b][c]==0){
            arr[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1)-w(a,b-1,c);
            return arr[a][b][c];
        }
        else return arr[a][b][c];
    }else{
        if(arr[a][b][c]==0){
            arr[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
            return arr[a][b][c];
        }
        else{
            return arr[a][b][c];
        }
    }

}

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,c;
    for(int i=1;i<21;i++){
        for(int j=1;j<21;j++){
            for(int k=1;k<21;k++){
                w(i,j,k);
            }
        }
    }
    while(true){
        cin>>a>>b>>c;
        if(a==-1&&(b==-1&&c==-1)) break;
        printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
    }
    
    return 0;
}