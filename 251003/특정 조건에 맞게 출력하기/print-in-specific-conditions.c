#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[100],k;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        k =i;
        if(arr[i]==0){
        break;}
    }
    for(int j=0;j<k;j++){
        if(arr[j]%2==0){
            printf("%d ",arr[j]/2);
        }
        else{
            printf("%d ",arr[j]+3);
        }
    }
    return 0;
}