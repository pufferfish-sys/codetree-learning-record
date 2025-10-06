#include <stdio.h>
#include <string.h>

int main() {
    char arr[20];
    int n;
    scanf("%s",arr);
    int len =strlen(arr);
    while(len>1){
    scanf(" %d ",&n);
    for(int i=n; i<len-1;i++){
        arr[i]=arr[i+1];
    }
    arr[len-1]='\0';
    len--;
    printf("%s\n",arr);
    }


    return 0;
}