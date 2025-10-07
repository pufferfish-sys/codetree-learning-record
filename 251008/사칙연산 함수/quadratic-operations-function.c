#include <stdio.h>

void calc(int A,char O,int C){
    if(O=='+') printf("%d + %d = %d",A,C,A+C);
    else if(O=='-') printf("%d - %d = %d",A,C,A-C);
    else if(O=='/') printf("%d / %d = %d",A,C,A/C);
    else if(O=='*') printf("%d * %d = %d",A,C,A*C);
    else printf("False");
}

int main() {
    int a, c;
    char o;
    scanf("%d %c %d", &a, &o, &c);
    calc(a,o,c);
    
    return 0;
}