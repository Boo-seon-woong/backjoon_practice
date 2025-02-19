/*


*/
#include <iostream>
using namespace std;
long long int arr[101]={0,1,1,1,2,2,};


int main(void){
    int n,temp;
    for(int i=6;i<=100;i++){
        arr[i]=(arr[i-1]+arr[i-5]);
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        cout<<arr[temp]<<"\n";
    }
    return 0;
}