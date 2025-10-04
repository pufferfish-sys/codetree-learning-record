#include <stdio.h>

int main() {
    // Please write your code here.
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m],cnt=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        arr[i][j]=cnt;
        printf("%d ",arr[i][j]);
        cnt++;
        }printf("\n");
    }
    return 0;
}