#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char arr[100];
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++) {
        if(isalpha(arr[i])){
        arr[i] = tolower(arr[i]);
         printf("%c", arr[i]);
        }
        else if(isdigit(arr[i])) printf("%c",arr[i]);
    }
    return 0;
}
