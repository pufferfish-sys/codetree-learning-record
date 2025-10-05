#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char a[20];
    char b[]="Hello";
    scanf("%s",a);
    strcat(a,b);
    printf("%s",a);

    return 0;
}