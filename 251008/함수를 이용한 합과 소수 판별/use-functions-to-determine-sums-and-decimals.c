#include <stdio.h>
#include <string.h>

int c1(int n){
    for(int i=2;i*i<n;i++){
        if(n%i==0) return 0;
    }
    return 1;
    }
int c2(int n){
    int sum=0; 
    while(n>0){
        sum+=n%10;
        n = n/10;
    }
    if(sum%2==0) return 1;
    else return 0;
    }
int main() {
    int A, B, cnt = 0;
    scanf("%d %d", &A, &B);

    for(int i = A; i <= B; i++){
        if(c1(i) && c2(i))
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
