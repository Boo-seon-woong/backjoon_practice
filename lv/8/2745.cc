#include <iostream>
#include <cstring>
using namespace std;
    int change(char a){
        int temp=(int)a;
        if(a>64) return a-55;
        return a-48;
    }
    //change:char->정수
    int sqr(int a,int b){
        int r=a;
        if(b==0){return 1;}
        for(int i=1;i<b;i++){
            r*=a;
        }
        return r;
    }

    char str[1000];
    int num[1000];
    int n,len;

int main(void){
    ios::sync_with_stdio(false);
    int r=0;
    cin>>str>>n;
    len=strlen(str);
    for(int i=len-1;i>=0;i--){
        //cout<<"n is "<<n<<endl;
        num[i]=change(str[len-1-i])*sqr(n,i);
        //printf("%d, %d\n",i,num[i]);
        //cout<<sqr(n,i)<<endl;
        r+=num[i];
    }
    cout<<r<<endl;
    return 0;
}