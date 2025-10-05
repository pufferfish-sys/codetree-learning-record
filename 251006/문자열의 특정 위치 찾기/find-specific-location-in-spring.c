#include <stdio.h>
#include <string.h>

int main() {
    char a[20],c;
    int flag=-1;
    scanf("%s",a);scanf(" %c",&c);
    for(int i=0;i<strlen(a);i++){
        if(a[i]==c){
            flag=i;
            break;
        }
    }
    if(flag>=0)printf("%d",flag);
    else printf("No ");
    return 0;
}