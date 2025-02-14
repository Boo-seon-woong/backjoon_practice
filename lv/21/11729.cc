#include <iostream>
#include <cmath>
using namespace std;
void move(int dept,int init,int fin,int ex);
int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int count=2;
    for(int i=1;i<n;i++){
        count*=2;
    }
    cout<<count-1<<"\n";
    move(n,1,3,2);
    return 0;
}

void move(int dept,int init,int fin,int ex){
    if(dept==1){
        cout<<init<<" "<<fin<<"\n";
        return;
    }
    move(dept-1,init,ex,fin);//init에서 ex로 옮김
    cout<<init<<" "<<fin<<"\n";//bottom을 init에서 fin으로 옮김
    move(dept-1,ex,fin,init);//ex에서 fin으로 옮김
    return;
}