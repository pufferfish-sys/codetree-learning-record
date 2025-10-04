#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[4][4],sum=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d",sum);

    return 0;
}