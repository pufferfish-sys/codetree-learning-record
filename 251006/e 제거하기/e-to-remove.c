#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int n;
    scanf("%s",arr);
    int len =strlen(arr);
    for(int i=0; i<len-1;i++){
        if(arr[i]=='e'){
        for(int a=i;a<len-1;a++){
            arr[a]=arr[a+1];   
        }
        break;
        }
    }
    arr[len-1]='\0';
    len--;
    printf("%s",arr);
    return 0;
}