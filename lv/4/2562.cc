#include "stdio.h"
int main(){int m=0,n,l,c=0;for(int i=0;i<9;i++){c+=1;scanf("%d",&n);if(n>m){l=c;m=n;}}printf("%d\n%d",m,l);return 0;}