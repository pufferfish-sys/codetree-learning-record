#include <stdio.h>

void star(int n,int m){
    int a=m;
    for(int i=n;i<=10000;i+=n){
        if(i==a){printf("%d",i);break;}
        if(i>a){a+=m;}
   }
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    star(N,M);
    // Please write your code here.
    
    return 0;
}