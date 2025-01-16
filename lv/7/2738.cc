#include <iostream>
using namespace std;

int arr1[100][100],arr2[100][100],arr3[100][100];

int main(void){

    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr3[i][j]=arr2[i][j]+arr1[i][j];
            cout<<arr3[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}