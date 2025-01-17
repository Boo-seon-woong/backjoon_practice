#include <iostream>

int main(void){
    int n,lv=1,i=6;
    scanf("%d",&n);
    if(n==1) {
        printf("1\n");
        return 0;
    }
    n--;
    while(n>0){
        n-=i;
        i+=6;
        lv++;
    }
    printf("%d\n",lv);
    return 0;
}