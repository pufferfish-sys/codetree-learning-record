#include <stdio.h>

int main() {
    // Please write your code here.
    int flag=0;
    char c,arr[6]={'L','E','B','R','O','S'};
    scanf("%c",&c);
    for(int i=0;i<6;i++){
        if(c==arr[i]){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
            printf("None");}
    return 0;
}