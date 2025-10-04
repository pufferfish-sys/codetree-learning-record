#include <stdio.h>

int main() {
   
    int n,m,r,c;
    int arr[10][10]={0,};
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++){
        scanf("%d %d",&r,&c);
        arr[r-1][c-1]=r*c;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}