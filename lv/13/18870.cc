#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Int2{
    long long arr[2];
};

bool cmp(const Int2 &a, const Int2 &b) {
    return a.arr[0] < b.arr[0]; // arr[0] 기준 오름차순
}
bool cmp2(const Int2 &a, const Int2 &b) {
    return a.arr[1] < b.arr[1]; // arr[0] 기준 오름차순
}
vector<Int2> v;

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n;
    struct Int2 temp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp.arr[0];
        temp.arr[1]=i;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);

    int past=v[0].arr[0],bias=1;
    v[0].arr[0]=0;
    for(int i=1;i<n;i++){
        if(v[i].arr[0]==past){
            v[i].arr[0]=v[i-1].arr[0];
            continue;
        }
        past=v[i].arr[0];
        v[i].arr[0]=bias;bias++;
    }

    sort(v.begin(),v.end(),cmp2);

    for(int j=0;j<n;j++){
        cout<<v[j].arr[0]<<" ";
    }
    cout<<endl;
    return 0;
}