#include <stdio.h>

int main() {
    // Please write your code here.
    int k,arr[100],count[11]={0,};
    for(int i=0;i<100;i++){
        scanf("%d ",&arr[i]);
        k =i;
        if(arr[i]==0){
            break;
        }
    }
    for(int i=0;i<k;i++){
        count[arr[i]/10]++;
    }
    for(int i=10;i>0;i--){
        printf("%d - %d\n",i*10,count[i]);
    }


    return 0;
}