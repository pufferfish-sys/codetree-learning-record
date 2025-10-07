#include <stdio.h>

int a, b;

void aff(){
    int sum=0;
    for(int i=a;i<=b;i++){
        int flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){flag=0;break;}
        }
        if(flag)sum+=i;
    }
    printf("%d",sum);
}

int main() {
    scanf("%d %d", &a, &b);
    aff();
    return 0;
}