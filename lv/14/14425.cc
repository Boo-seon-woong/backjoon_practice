#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> a,b;
int n,m;
string temp;
bool comp(string a,string b){
    return a<b;
}

int search(int begin,int end, string target);
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int result=0;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++){
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end(),comp);
    for(int i=0;i<m;i++){
        cin>>temp;
        result+=search(0,n-1,temp);
        //b.push_back(temp);
    }
    //
    cout<<result<<endl;
    return 0;
}

int search(int begin,int end,string target){
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