#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n,cnt=0; char arr[100];
    scanf("%d %s",&n,arr);
    for(int i=0;i<10;i++){
        scanf("%s",&arr);
        if(strcmp(arr,"END")==0) break;
        for(int i=strlen(arr)-1;i>=0;i--){
            printf("%c",arr[i]);
        }
        printf("\n"); 
    }
    return 0;
}