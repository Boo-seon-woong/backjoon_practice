/*
짧은 설명

산술평균

중앙값

최빈값

범위

구하여라
*/

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,sum=0,temp,min=5000,max=-5000,mid,manny,arr[8001]={0,};
    //변수 초기화
    vector<int> many;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[temp+4000]++;//등장횟수 count for 최빈값
        sum+=temp;//for 산술평균
        //중앙값은 n/2를 통해서 arr에서 탐색할거임
        if(temp>max) max=temp;
        if(temp<min) min=temp;//for 범위
    }
    float avg=(float)sum/n;//산술평균 끝
    int loc=n/2+1;
    for(int i=0;i<8001;i++){
        loc-=arr[i];
        if(loc<=0){
            mid=i-4000;
            break;
        }
    }
    int temp_max=0;
    for(int i=0;i<8001;i++){
        if(temp_max<arr[i]){
            temp_max=arr[i];
            //many를 clear하고 i-4000을 push_back함
            many.clear();
            many.push_back(i-4000);
        }else if(temp_max==arr[i]){
            many.push_back(i-4000);
        }
    }
    sort(many.begin(),many.end());
    if(many.size()>1) manny=many[1];
    else manny=many[0];
    if(round(avg)==0) avg=0;
    cout<<round(avg)<<"\n"<<mid<<"\n"<<manny<<"\n"<<max-min<<"\n";
    return 0;
}