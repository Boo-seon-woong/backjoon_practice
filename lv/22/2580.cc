#include <iostream>
using namespace std;
int arr[9][9][2],x_used[9][10]={0,},y_used[9][10]={0,},box_used[9][10]={0,};
int count=0;
void initialize(void);
void show(void);
int func(int x,int y);
int main(void){
    int temp;
    initialize();
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>temp;
            if(temp==0){
                count++;
            }else{
                arr[i][j][0]=temp;
                x_used[i][temp]=1;
                y_used[j][temp]=1;
                box_used[arr[i][j][1]][temp]=1;
            }
        }
    }
    //arr,x,y,box_used 초기값 입력 완료

    func(0,0);
    //cout<<"show()\n";
    show();
    return 0;
}
void initialize(void) {
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            arr[i][j][1] = (i/3) * 3 + (j/3);  // 🛠 올바른 박스 인덱스 설정
        }
    }
}

void show(void){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<arr[i][j][0]<<" ";
        }
        cout<<"\n";
    }
    return;
}

int func(int y,int x){
    //show();
    if(x==9){
        x=0;
        y++;
    }
    if(y == 9){
        //x,y,box check
        return 1;
    }else if(arr[y][x][0]!=0){
        if(func(y,x+1)==1) return 1;
    }else{
        for(int i=1;i<10;i++){
            if((x_used[y][i]==0&&y_used[x][i]==0)&&box_used[arr[y][x][1]][i]==0){
                //쓸 수 있는 숫자일 때
                arr[y][x][0]=i;
                x_used[y][i]=1;
                y_used[x][i]=1;
                box_used[arr[y][x][1]][i]=1;
                if(x==8){//줄바꿈
                    if(func(y+1,0)==1) return 1;
                }else{//다음칸 이동
                    if(func(y,x+1)==1) return 1;
                }
                arr[y][x][0]=0;
                x_used[y][i]=0;
                y_used[x][i]=0;
                box_used[arr[y][x][1]][i]=0;
            }
        }
    }
    return 0;
}