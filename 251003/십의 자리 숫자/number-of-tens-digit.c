#include <stdio.h>

int main() {
    // Please write your code here.
    int k,arr[100],count[10]={0,};
    for(int i=0;i<100;i++){
        scanf("%d ",&arr[i]);
        k=i;
        if(arr[i]==0){
            break;
        }
    }
    for(int i=0;i<k;i++){
        count[(arr[i])/10]++;
    }
    for(int i=1;i<=9;i++){
        printf("%d - %d\n",i,count[i]);
    }
    return 0;
}