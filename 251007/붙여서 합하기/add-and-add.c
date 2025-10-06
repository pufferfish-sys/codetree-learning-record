#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    // Please write your code here.
    char a[1000],b[1000],t1[1000],t2[1000];
    scanf("%s",a);
    scanf("%s",b);
    strcpy(t1,a);
    strcpy(t2,b);
    strcat(t1,b);
    strcat(t2,a);
    printf("%d",atoi(t1)+atoi(t2));
    return 0;
}