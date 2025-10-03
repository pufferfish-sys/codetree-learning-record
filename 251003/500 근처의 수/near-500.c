#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[10],min=1001,max=0;
    for(int i=0;i<10;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<10;i++){
        if(arr[i]>=max&&arr[i]<500){
            max=arr[i];
        }
    }
    for(int i=0;i<10;i++){
        if(min>=arr[i]&&arr[i]>500){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);
    
    return 0;
}