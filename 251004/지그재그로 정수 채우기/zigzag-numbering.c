#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m,cnt=0;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < n; i++) {
                arr[i][j] = cnt++;
            }
        } else {
            for (int i = n - 1; i >= 0; i--) {
                arr[i][j] = cnt++;
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
        }
    return 0;
}