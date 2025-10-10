#include <stdio.h>

int arr[100];

int maxf(int n){
    if (n == 0) return arr[0];
    int max = maxf(n - 1);
    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}



int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d",maxf(n));
    return 0;
}