//본 코드는 무리하게 vector container 사용을 고집하다가 leave.size()만큼의 v.erase() 사용으로 시간초과가 발생한 실패한 코드이다. 본 코드의 실패를 바탕으로 적절한 container 사용이 알고리즘 문제 해결에 있어서 얼마나 중요한 지 되새겨 보자.

//set의 삭제 연산이 vector의 삭제 연산보다 훨씬 빠르더라. set.erase는 O(log n), vector의 v.erase는 O(N) 임.......근데 출처가 chatGPT라 교차검증할 필요는 있어보이긴 한데 set 썼을 때 실제로 시간초과 문제가 해결 된 것 보면 대충 맞말 같음

//++ 아아아악 이거 구글링해보니까 남들은 map 써서 딸깍으로 풀었네 젠장
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> enter,leave;
int search(int begin,int end,string target);
bool comp(string a,string b){
    return a>b;
}

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,e=0,l=0;
    string temp_name,temp_state;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp_name>>temp_state;
        if(temp_state=="enter"){
            enter.push_back(temp_name);e++;
        }else{
            leave.push_back(temp_name);l++;
        }
    }
    sort(enter.begin(),enter.end(),comp);
    for(int i=0;i<l;i++){
        int temp_answer=search(0,e-1,leave[i]);
        if(temp_answer!=-1){
            enter.erase(enter.begin()+temp_answer);
            e--;
        }
    }
    int len=enter.size();
    for(int i=0;i<len;i++){
        cout<<enter[i]<<"\n";
    }

    return 0;
}

int search(int begin,int end,string target){
    int mid=(begin+end)/2,answer;
    if(begin>=end){
        if(enter[begin]==target) return begin;
        else return -1;
    }
    if(target==enter[mid]) return mid;
    else if(target<enter[mid]){
        answer=search(mid+1,end,target);
    }else answer=search(begin,mid-1,target);
    return answer;
}