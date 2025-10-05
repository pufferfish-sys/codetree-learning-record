#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char arr[20],temp,temp2;
    scanf("%s",arr);
    temp2=arr[0];
    temp=arr[1];
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]==temp2){
            arr[i]=temp;
        }
        else if(arr[i]==temp){
            arr[i]=temp2;
        }
    }
    printf("%s",arr);

    return 0;
}