#include <stdio.h>

int arr[101];
int sum = 0;

void aff(int *a) {
    sum += arr[*a];
    while (*a > 1) {
        if (*a % 2 == 0) {
            *a /= 2;
            sum += arr[*a];
        } else {
            *a -= 1;
            sum += arr[*a];
        }
    }
    printf("%d", sum);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    aff(&m);
    return 0;
}
