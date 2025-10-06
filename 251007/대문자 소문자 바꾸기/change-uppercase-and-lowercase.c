#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char arr[20];
    scanf("%s", arr);

    for (int i = 0; i < strlen(arr); i++) {
        if('A'<=arr[i]&&arr[i]<='Z'){
        arr[i] = tolower(arr[i]);
        }
        else if('a'<=arr[i]&&arr[i]<='z') 
        arr[i] = toupper(arr[i]);
    }
    printf("%s",arr);
    return 0;
}
