#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[100],k;
    scanf("%d",&n);
    arr[0]=1;
    arr[1]=n;
    for(int i=2;i<100;i++){
        arr[i]=arr[i-1]+arr[i-2];
        k=i;
        if(arr[i]>100){
            break;
        }
    }
    for(int i=0;i<=k;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}