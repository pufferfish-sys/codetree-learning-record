#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    scanf("%d %d",&arr[0],&arr[1]);
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]+2*arr[i-2];
    }
    for(int j=0;j<10;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}