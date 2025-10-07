#include <stdio.h>
void year(int n){
    if(n%4==0&&!(n%100==0&n%400!=0)) printf("true");
    else printf("false");
}
int main() {
    int y;
    scanf("%d", &y);
    year(y);
    // Please write your code here.
    
    return 0;
}