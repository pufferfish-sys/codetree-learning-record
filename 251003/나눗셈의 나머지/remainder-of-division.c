#include <stdio.h>

int main() {
    // Please write your code here.
    int a,b,count[10]={0,},sum=0;
    scanf("%d %d",&a,&b);
    while(a>1){
        count[a%b]++;
        a = a/b;
    }
    for(int i=0;i<10;i++){
        sum+=count[i]*count[i];
    }
    printf("%d",sum);
    return 0;
}