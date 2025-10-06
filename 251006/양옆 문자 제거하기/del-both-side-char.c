#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    scanf("%s",arr);
    int len =strlen(arr);
    for(int i=1; i<len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len-1]='\0';
    int len2 =strlen(arr);
    for(int i=len2-2; i<len2-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len2-1]='\0';
    printf("%s",arr);

    return 0;
}