//7785의 교훈을 통한 생애 첫 map container 활용

#include <iostream>
#include <map>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    string name;
    map<string, int> names;
    int n,m;
    
    cin>>n;
    cin>>m;
    for(int i = 0; i<n; i++){    
        cin >> name;
        names[name] = 1;
    }

    int result=0;
    for(int j=0;j<m;j++){
        cin>>name;
        if(names[name]==1){
            names[name]=2;result++;
        }else names[name]=1;
    }

    cout<<result<<endl;
    for(map<string,int>::iterator k=names.begin();k!=names.end();k++){
        if(k->second==2){
            cout<<k->first<<"\n";
        }
        
    }
    return 0;
}