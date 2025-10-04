#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int cnt = 1;
// 총 대각선의 개수 = n + m - 1
    for (int i = 0; i < n + m - 1; i++) {
        int row, col;
        // 대각선 시작점 찾기
        if (i < m) { 
            // i가 열 개수보다 작으면 → 맨 위 행에서 시작
            row = 0; 
            col = i;         // (0, i)에서 시작
        } else { 
            // i가 열보다 크면 → 오른쪽 끝 열에서 시작
            row = i - m + 1; // (i-m+1, m-1)에서 시작
            col = m - 1;
        }
        // 대각선을 따라 이동하며 값 채우기
        while (row < n && col >= 0) {
            arr[row][col] = cnt;  // 현재 위치에 값 채우기
            cnt++;                // 다음 값 준비
            row++;                // 한 칸 아래로
            col--;                // 한 칸 왼쪽으로
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
