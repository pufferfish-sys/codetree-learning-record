#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    int n;
    scanf("%d ",&n);
    char arr[1000]="";
    for(int i=0;i<n;i++){
        char arr2[100];
        scanf("%s",arr2);
        strcat(arr,arr2);
    } 
    for(int i=0;i<strlen(arr);i++)
    {printf("%c",arr[i]);
    if((i+1)%5==0){
        printf("\n");
    }
    }   
    return 0;
}