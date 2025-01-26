#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int a,b,len,temp,result=0;
map<int,int> comb;

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin>>a>>b;
    len=a+b;
    for(int i=0;i<len;i++){
        cin>>temp;
        if(comb[temp]==1) comb[temp]=2;
        else comb[temp]=1;
    }
    int comb_size=comb.size();
    for(map<int,int>::iterator j=comb.begin();j!=comb.end();j++){
        if(j->second==1){
            result++;
        }
    }
    cout<<result<<endl;
    return 0;
}