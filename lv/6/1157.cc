#include <iostream>
#include <cstring>
using namespace std;

int alp[26]={0,},len;

int cut(int n){
    if(n>96) return n-97;
    else return n-65;
}

void show(void){
    ios::sync_with_stdio(false),cin.tie(NULL);
    for(int i=0;i<26;i++){
        //printf("%d ",alp[i]);
    }
    cout<<endl;
    return;
}

int main(void){
    int temp;
    char str[1000001];
    //int alp[26],len;
    cin>>str;
    len=strlen(str);
    for(int i=0;i<len;i++){
        temp=cut(str[i]);
        alp[temp]++;
        ////printf("temp: %d, str[%d]=%c\n",temp,i,str[i]);
    }
    //show();
    int max=0,temp2=false,temp3=0;

    for(int i=0;i<26;i++){
        if(alp[i]>max){
            max=alp[i];
            temp2=false;
            temp3=i;
        }
        else if(alp[i]==max){
            //printf("%d and %d\n",temp3,i);
            temp2=true;
        }
    }
    if(temp2==true){
        cout<<"?"<<endl;
        return 0;
    }else cout<<(char)(temp3+65)<<endl;
    return 0;
}