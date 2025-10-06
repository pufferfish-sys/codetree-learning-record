#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n;
    char arr[10];
    scanf("%d",&n);
    int sum=0;
    sprintf(arr,"%d",n);
    for (int i = 0; i < strlen(arr); i++) {
        sum+=(int)arr[i]-'0';
    }
    printf("%d", sum);
    return 0;
}
