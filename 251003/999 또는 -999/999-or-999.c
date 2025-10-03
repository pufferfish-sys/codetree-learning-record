#include <stdio.h>

int main() {
    // Please write your code here
    int arr[100],k,max=0,min=999;
    for(int i=0;i<100;i++){
        k=i;
        scanf("%d ",&arr[i]);
        if(arr[i]==999||arr[i]==-999){
            break;
        }
    }
    for(int i=0;i<k;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<k;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
    return 0;
}