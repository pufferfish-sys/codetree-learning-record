#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10],k;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]%3==0&&arr[i]!=0){
            break;
        }
        k=i;
    }
    printf("%d",arr[k]);
    return 0;
}