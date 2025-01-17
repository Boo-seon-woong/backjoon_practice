#include <iostream>

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    c-=a;
    if(c<=0){
        printf("1");
        return 0;
    }
    int temp=c/(a-b)+1;
    if(c%(a-b)!=0) temp++;
    printf("%d\n",temp);
    return 0;
}