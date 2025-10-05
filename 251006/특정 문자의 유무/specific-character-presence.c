#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    int flag=0,flag2=0;
    scanf("%s",a);
    for(int i=0;i<strlen(a)-1;i++){
        if(a[i]=='e' && a[i+1]=='e'){
            flag=1;
        }
        if(a[i]=='a' && a[i+1]=='b'){
            flag2=1;
        }
    }
    if(flag==1)printf("Yes ");
    else printf("No ");
    if(flag2==1)printf("Yes ");
    else printf("No ");
    return 0;
}