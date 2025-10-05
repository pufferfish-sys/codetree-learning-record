#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char arr[20];char arr2[20];
    scanf("%s",arr);
    scanf("%s",arr2);
    arr2[0]=arr[0];
    arr2[1]=arr[1];
    printf("%s",arr2);

    return 0;
}