#include <stdio.h>

int main() {
    // Please write your code here.
    char a,b;
    scanf("%c %c",&a,&b);
    int a1 = (int)a;
    int b1 = (int)b;
    if(a1>b1)printf("%d %d",a1+b1,a1-b1);
    else printf("%d %d",a1+b1,b1-a1);
    return 0;
}