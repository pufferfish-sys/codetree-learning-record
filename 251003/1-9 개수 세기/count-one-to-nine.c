#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[100],count[10]={0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=9;i++){
        printf("%d\n",count[i]);
    }
    return 0;
}