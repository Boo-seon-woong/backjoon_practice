#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> arr[201];
string str[100005];
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,temp_age,i=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp_age;
        arr[temp_age].push_back(i+1);
        cin>>str[i+1];
    }
    for(int k=0;k<201;k++){
        for(int j=0;j<arr[k].size();j++){
            cout<<k<<" "<<str[arr[k][j]]<<"\n";
        }
    }

    return 0;
}