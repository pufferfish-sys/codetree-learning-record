#include <stdio.h>

int n1(int n){
    if(n==2) return n;
    return n+n1(n-2);

}

int n2(int n){
    if(n==1) return n;
    return n+n2(n-2);
}



int main() {
    int n;
    scanf("%d", &n);
    if(n%2==0) printf("%d",n1(n));
    else printf("%d",n2(n));
    
    return 0;
}