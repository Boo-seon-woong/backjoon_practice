#include <iostream>
int main(){int t,m=0,y=0,x=0;for(int i=0;i<9;i++){for(int j=0;j<9;j++){scanf("%d",&t);if(t>m){y=i;x=j;m=t;}}}printf("%d\n%d %d",m,y+1,x+1);return 0;}