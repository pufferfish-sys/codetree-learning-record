#include <stdio.h>
#include <string.h>
char A[101];

void add(char *arr){
    char a=arr[0];
    int flag=0;
    for(int i=1;i<strlen(arr);i++){
        if(a!=arr[i]){
            flag=1; break;
        }
    }
    if(!flag) printf("No");
    else printf("Yes");
}



int main() {
    scanf("%s", A);
    add(A);
    
    return 0;
}