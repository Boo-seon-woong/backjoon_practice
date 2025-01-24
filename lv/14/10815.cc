#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a;
int n,m,temp;

int search(int begin,int end, int target);
int main(void){
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    cin>>m;
    sort(a.begin(),a.end());
    for(int i=0;i<m;i++){
        cin>>temp;
        printf("%d ",search(0,n-1,temp));
    }
    cout<<endl;
    return 0;
}

int search(int begin,int end,int target){
    int answer;
    if(begin>=end){
        if(a[begin]!=target) return 0;
        else return 1;
    }
    int mid=(begin+end)/2;
    if(target==a[mid]) return 1;
    if(target>a[mid]){
        answer = search(mid+1,end,target);
    }else answer = search(begin,mid-1,target);
    return answer;
}