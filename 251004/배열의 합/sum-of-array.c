#include <stdio.h>

int main() {
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        printf("%d\n",arr[i][0]+arr[i][1]+arr[i][2]+arr[i][3]);
    }
    
    return 0;
}