/*
정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령
1. 1 x: 정수 x를 스택에 넣는다.
2. 2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1 을 대신 출력한다.
3. 3 : 스택에 들어있는 정수의 개수를 출력한다.
4. 스택이 비어있으면 1, 아니면 0을 출력한다.
5. 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 출력한다.
*/

#include <iostream>
#include <vector>
using namespace std;
int main(void){
int n,cmd,temp;
vector<int> v;
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin>>n;
    for(int i=0;i<n;i++){
        //명령 진행
        cin>>cmd;
        if(cmd==1){
            cin>>temp;
            v.push_back(temp);
        }else if(cmd==2){
            //2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1 을 대신 출력한다.
            if(v.empty()) cout<<-1<<"\n";
            else{
                cout<<v.back()<<"\n";
                v.pop_back();
            }
        }else if(cmd==3){
            //3 : 스택에 들어있는 정수의 개수를 출력한다.
            cout<<v.size()<<"\n";
        }else if(cmd==4){
            //4. 스택이 비어있으면 1, 아니면 0을 출력한다.
            if(v.empty()) cout<<1<<"\n";
            else cout<<0<<"\n";
            
        }else if(cmd==5){
            //스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 출력한다.
            if(v.empty()) cout<<"-1\n";
            else cout<<v.back()<<"\n";
        }
    }
    return 0;
}