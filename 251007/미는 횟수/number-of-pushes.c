#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n,cnt=0;
    char arr[100],arr2[100],temp;
    scanf("%s",arr);
    scanf("%s",arr2);
    int len = strlen(arr);

    for(int j=0;j<len;j++){
             temp = arr[len - 1];
        for (int i = len - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    cnt++;
    if(strcmp(arr,arr2)==0)break;

    }
    if(cnt==len){printf("-1");}
    else printf("%d", cnt);
    return 0;
}

