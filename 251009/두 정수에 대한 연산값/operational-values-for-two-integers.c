#include <stdio.h>

void plus(int *A,int *B){
    if(*A>*B){
        *A+=25;
        *B*=2;
    }
    else{
        *A*=2;
        *B+=25;
    }
    return;
}


int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    plus(&a,&b);
    printf("%d %d",a,b);
    

    return 0;
}