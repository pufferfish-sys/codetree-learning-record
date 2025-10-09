#include <stdio.h>

void plus(int *A,int *B){
    if(*A>*B){
        *A*=2;
        *B+=10;
    }
    else{
        *A+=10;
        *B*=2;
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