#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str[100];
    fgets(str,100,stdin);
    for(int i=2;i<10;i++){
        printf("%c",str[i]);
    }
    return 0;
}