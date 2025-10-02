#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10];
    scanf("%d %d",&arr[0],&arr[1]);
    for(int i=2;i<10;i++){
        arr[i]=arr[i-1]+arr[i-2];
        if(arr[i]>=10){
            arr[i]-=10;
        }
    }

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}