#include <stdio.h>
#include <string.h>
char A[101];

int add(char *arr){
    char a=arr[0];
    int flag=0,len=strlen(arr);
    for(int i=1;i<len;i++){
        if(a!=arr[i]){
            flag=1; return flag;
        }
    }
    return flag;
}



int main() {
    scanf("%s", A);
    int n = add(A);
    if(n) printf("Yes");
    else printf("No");
    return 0;
}