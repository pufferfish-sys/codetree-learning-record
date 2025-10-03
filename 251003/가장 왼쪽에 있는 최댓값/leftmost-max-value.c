#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[1000],max=0,k;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    k=n;
    while(k>0){
    for(int i=0;i<k;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            k=i;
            break;
        }
    }
    printf("%d ",k+1);
    max=0;
    }
    

    return 0;
}