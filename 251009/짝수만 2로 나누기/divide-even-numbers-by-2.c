#include <stdio.h>

int n;
int arr[50];

void aff(int *x, int size) {
    for (int i = 0; i < size; i++) {
        if (x[i] % 2 == 0) {   
            x[i] /= 2;         
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    aff(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
