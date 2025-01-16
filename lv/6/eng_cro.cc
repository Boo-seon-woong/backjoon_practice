//크로아티아 알파벳 문제를 변형한 영어->크로아티아어 변형기

#include <iostream>
#include <cstring>
using namespace std;
//c:1 d:2 l:3 n:4 s:5 z:6
int check(char a){
    if(a=='c'){
        return 1;
    }
    if(a=='d'){
        return 2;
    }
    if(a=='l'){
        return 3;
    }
    if(a=='n'){
        return 4;
    }
    if(a=='s'){
        return 5;
    }
    if(a=='z'){
        return 6;
    }
    return 0;
}

int main(void){
    char str[101];
    int len,r=0;
    cout<<"enter the string that you wanna change :";
    cin>>str;
    cout<<"result :";
    len=strlen(str);
//default value setting
/*
c:1 = - aaaaaaaaa
d:2 z= -
l:3 j
n:4 j
s:5 =
z:6 =
*/
    for(int i=0;i<len;i++){//length loop
    int temp=check(str[i]);
    //printf("i:%d, temp:%d\n",i,temp);
        if(temp==0){
            r++;
            cout<<str[i];//------------------------new
            continue;
        }
        //ㄴ 크로아티아 알파벳이 아닐 시 continue
        if(temp==1){
            if(str[i+1]=='='){
                r++;i++;printf("č");
            }else if(str[i+1]=='-'){
                r++;i++;printf("ć");
            }else {r++;cout<<str[i];} 
        } else if(temp==3){
            if(str[i+1]=='j'){
                r++;i++;printf("lj");
            }else {r++;cout<<str[i];}
        } else if(temp==4){
            if(str[i+1]=='j'){
                r++;i++;printf("nj");
            }else {r++;cout<<str[i];}
        } else if(temp==5){
            if(str[i+1]=='='){
                r++;i++;printf("š");
            }else {r++;cout<<str[i];}
        } else if(temp==6){
            if(str[i+1]=='='){
                r++;i++;printf("ž");
                continue;
            }else {r++;cout<<str[i];}
        }
        if(temp==2){
            if(str[i+1]=='-'){
                r++;i++;printf("đ");
                continue;
            }
            if(str[i+1]=='z'&&str[i+2]=='='){
                r++;i+=2;printf("dž");
            }
            else r++;cout<<str[i];
        }
    }
    cout<<endl<<"word count: "<<r<<endl;
    return 0;
}