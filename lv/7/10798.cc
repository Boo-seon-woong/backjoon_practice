#include <iostream>
using namespace std;
//char '0'과 null 0 은 다르다는 걸 잠깐 까먹은 바보 is me
char arr[6][20];

int main(void){
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<5;j++){
            if(arr[j][i]!=NULL) cout<<arr[j][i];
        }
    }
    //cout<<endl;
    return 0;
}