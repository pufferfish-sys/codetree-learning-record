#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    int n;
    scanf("%d ",&n);
    char arr[100]="";
    for(int i=0;i<n;i++){
        char arr2[100];
        scanf("%s",arr2);
        strcat(arr,arr2);
    } 
    printf("%s",arr);   
    return 0;
}