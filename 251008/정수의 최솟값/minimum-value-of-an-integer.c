#include <stdio.h>
void minf(int A,int B,int C){
    int min;
    if(A>=C&&B>=C){
        min = C;}
    else if(A>=B&&C>=B){
        min =B;
    }
    else{
        min =A;
    }
printf("%d",min);
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    minf(a,b,c);
    // Please write your code here.
    
    return 0;
}