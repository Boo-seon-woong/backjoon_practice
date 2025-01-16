#include <iostream>
#include <cstring>
using namespace std;

int n,result=0;
char word[100][101], abc[26]={0,};
//default value setting

void clear(void){
    for(int i=0;i<26;i++){
        abc[i]=0;
    }
    return;
}

void check(int a){
    int len=0;
    clear();
    cin>>word[a];
    len=strlen(word[a]);
    for(int i=0;i<len;i++){
        if(abc[(int)word[a][i]-97]==0){
            abc[(int)word[a][i]-97]=1;
            //printf("%d ",abc[(int)word[a][i]-97]);
            while(word[a][i+1]==word[a][i]){
                i++;
                //printf("I'm stuck\n");
            }
        } else{
            //printf("this is not\n");
            return;
        }
    }
    result++;return;
}

int main(void){
    
    cin>>n;
    for(int i=0;i<n;i++){
        check(i);
        //printf("fuck\n");
    }
    cout<<result<<endl;

    return 0;
}