#include <stdio.h>

int a, b, c;
int sumf(int a){
    if(a<10) return a;
    return sumf(a/10)+a%10;
}


int main() {
    scanf("%d %d %d", &a, &b, &c);
    printf("%d",sumf(a*b*c));
    return 0;
}