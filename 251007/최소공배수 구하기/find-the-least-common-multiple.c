#include <stdio.h>

void star(int n,int m){
    int a;
    for(int i=1;i<=n;i++){
        if(n%i==0&&m%i==0){
        a=i;
   }}
   printf("%d",n*m/a);
}
int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    star(N,M);
    // Please write your code here.
    
    return 0;
}