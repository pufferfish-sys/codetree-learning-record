#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d ",&n);
    int a,sum=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&a);
        sum+=a;
    }
    char arr[10],temp;
    sprintf(arr,"%d",sum);
    int len = strlen(arr);
    temp = arr[0];
    for (int i = 0; i < strlen(arr); i++) {
        arr[i]=arr[i+1];
    }
    arr[len-1] = temp;
    printf("%s", arr);
    return 0;
}
