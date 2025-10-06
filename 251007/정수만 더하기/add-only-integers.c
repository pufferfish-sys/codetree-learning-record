#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char arr[100];
    scanf("%s", arr);
    int sum=0;

    for (int i = 0; i < strlen(arr); i++) {
        if(isdigit(arr[i])){
            sum+= arr[i] -'0';
        }
    }
    printf("%d",sum);
    return 0;
}
