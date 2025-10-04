#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m],arr2[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d ",&arr2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr2[i][j]==arr[i][j]){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}