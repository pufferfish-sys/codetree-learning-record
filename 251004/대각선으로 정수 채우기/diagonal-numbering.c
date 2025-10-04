#include <stdio.h>

int main() {
    // Please write your code here.
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int num = 1;
    for (int k = 0; k < n + m - 1; k++){
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (i + j == k)arr[i][j] = num++;}}}
                
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
