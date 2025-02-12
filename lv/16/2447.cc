/*
16단계도 아닌데 걍 갑자기 끌려서 하는 2447.cc
*/


#include <iostream>
using namespace std;
bool box[2200][2200];
void sketch(int a,int b);
int main(void){
    ios_base::sync_with_stdio(false);cout.tie(NULL);
    int n;
    cin>>n;
    sketch(n,n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(box[i][j]==1){
                cout<<" ";
            }else cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

void sketch(int a,int b){
    if(a==1) return;
    for(int xi=a/3;xi<b;xi+=a){
        for(int yi=a/3;yi<b;yi+=a){

        for(int j=1;j<=a/3;j++){
            for(int k=1;k<=a/3;k++){
                box[xi+j][yi+k]=1;
            }
        }

        }
    }
    sketch(a/3,b);
    return;
}