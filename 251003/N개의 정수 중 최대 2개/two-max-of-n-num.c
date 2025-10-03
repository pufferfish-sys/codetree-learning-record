#include <stdio.h>
#include <limits.h>

int main() {
    // Please write your code here.
    int n,arr[100],max=INT_MIN,max2=INT_MIN,k;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
            k=i;
        }
    }

    for(int i=0;i<n;i++){
        if(i==k){
            continue;
        }
        if(arr[i]>=max2){
            max2=arr[i];
        }
    }

    printf("%d %d",max,max2);
    return 0;
}