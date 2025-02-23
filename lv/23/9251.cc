/*
LCS(longest common subsequence)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다

예를 들어 acaykp와 capcak의 lcs는 acak가 된다

첫째 줄과 둘째 줄에 두 문자열이 주어진다
문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자로 이루어져 있다

첫째 줄에 입력으로 주어진 두 문자열의 lcs의 길이를 출력하라라
ACAYKP
CAPCAK
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string a,b;
int aa,bb;//temp_a,temp_b;
vector<int> v;

int main(void){
    cin>>a>>b;
    int count=0,len_a=a.length(),len_b=b.length();
    for(int i=0;i<len_b;i++){
        bb=b[i]-'A';
        for(int j=0;j<len_a;j++){
            aa=a[j]-'A';
            if(bb==aa) {
                //arr[count]=j;
                //count++;
                if(v.size()==0||v.back()<j) v.push_back(j);
                else{
                    for(int k=0;k<v.size();k++){
                        if(v[k]>=j){
                            v[k]=j;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<v.size()<<endl;
    return 0;
}