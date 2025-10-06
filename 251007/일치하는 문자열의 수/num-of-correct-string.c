#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n,cnt=0; char arr[100],arr2[100];
    scanf("%d %s",&n,arr);
    for(int i=0;i<n;i++){
        scanf("%s ",&arr2);
        if(strcmp(arr,arr2)==0)cnt++; 
    }
    printf("%d", cnt);
    return 0;
}