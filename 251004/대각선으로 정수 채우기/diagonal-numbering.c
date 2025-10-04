#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int cnt = 1;
    // i = 대각선 번호 (0부터 n+m-2까지)
    for (int i = 0; i < n + m - 1; i++) {
        int row, col;
        if (i < m) { 
            row = 0; 
            col = i; 
        } else { 
            row = i - m + 1; 
            col = m - 1; 
        }
        while (row < n && col >= 0) {
            arr[row][col] = cnt;
            cnt++;
            row++;
            col--;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
