/*
5
3 2 1 -3 -1

1 4 5 3 2
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

vector<array<int,2>> b;
vector<int> result;
int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,temp,num;
    int state=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        b.push_back({temp,0});
    }
    for(int i=0;i<n-1;i++){
        printf("%d fuck\n",i);
        num=b[state][0];
        result.push_back(b[state][1]);
        b.erase(b.begin()+state);
        if(num>0) num--;
        state+=num;
    }
    result.push_back(b[state][1]);
    for(int i=0;i<n;i++){
        printf("%d ",result[i]);
    }
    cout<<endl;
    return 0;
}