#include <stdio.h>

int main() {
    // Please write your code here.
    int n,arr[10],cnt=0;
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=(i+1)*n;
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
        if(arr[i]%5==0){
        cnt++;}
        if(cnt==2){
            break;
        }
        
    }
    return 0;
}