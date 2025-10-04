#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char str1[100];
    char str2[100];
    scanf("%s ",str1);
    scanf("%s ",str2);
    printf("%d",strlen(str1)+strlen(str2));
    return 0;
}