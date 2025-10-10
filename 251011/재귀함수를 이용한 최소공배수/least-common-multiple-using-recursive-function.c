#include <stdio.h>

int n;
int arr[11];
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int arr[],int n){
    if(n==1) return arr[1];
    int a = lcm(arr,n-1);
    return a*arr[n-1] /gcd(a,arr[n-1]);
}


int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    printf("%d",lcm(arr,n));
    
    return 0;
}