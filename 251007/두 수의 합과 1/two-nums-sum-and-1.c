#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int a, b;
    char arr[6];
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int cnt=0;
    sprintf(arr,"%d",sum);
    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] == '1') {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
