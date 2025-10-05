#include <stdio.h>
#include <string.h>
int main() {
    char arr[100],temp,temp2;
    scanf("%s",arr);
    temp=arr[0];
    temp2=arr[1];
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==temp2){
            arr[i]=temp;
        }
    }
    printf("%s",arr);

    return 0;
}