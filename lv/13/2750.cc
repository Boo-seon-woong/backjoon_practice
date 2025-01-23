#include <iostream>
using namespace std;
int arr[10000001];

void sort(int left,int right);
void merge(int left,int mid,int right);

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}

void sort(int left,int right){
    if(right>left){
        sort(left,(right+left)/2);
        sort((left+right)/2+1,right);
        merge(left,(left+right)/2,right);
    }
    return;
}

void merge(int left, int mid,int right){
    int a=left;
    int b=mid+1;
    int temp[right-left+1]={0,};
    int i=0;
    while(a<=mid||b<=right){
        if(a>mid){
            temp[i]=arr[b];
            i++;b++;
        }else if(b>right){
            temp[i]=arr[a];
            i++;a++;
        }
        else if(arr[a]<arr[b]){
            temp[i]=arr[a];
            i++;a++;
        }else{
            temp[i]=arr[b];
            i++;b++;
        }
    }
    for(i=0;i<right-left+1;i++){
        arr[left+i]=temp[i];
    }
    return;
}