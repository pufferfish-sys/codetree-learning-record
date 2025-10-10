#include <stdio.h>

int gcd(int a, int b) {       // 두 수의 최대공약수
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int arr[], int n) {   // n개의 수 LCM
    if (n == 1) return arr[0];  // base case: 한 개 수면 자기 자신
    int prev_lcm = lcm(arr, n - 1);   // 앞 n-1개 수의 LCM
    return prev_lcm * arr[n - 1] / gcd(prev_lcm, arr[n - 1]);
}

int main() {
    int n, arr[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", lcm(arr, n));
    return 0;
}
