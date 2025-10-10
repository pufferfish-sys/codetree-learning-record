#include <stdio.h>

int n;
int arr[11];

int lcm(int a,int b){
    int gcd =1;
    int min = (a < b) ? a : b;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0)
        gcd = i;
    }
    return a*b/gcd;
}
int aff(int n){
    if(n==1) return arr[1];
    return lcm(aff(n-1),arr[n]);
}


int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    printf("%d",aff(n));
    
    return 0;
}