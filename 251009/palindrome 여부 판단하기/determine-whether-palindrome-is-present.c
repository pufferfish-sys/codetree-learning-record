#include <stdio.h>
#include <string.h>

void Modify(char *s) {
    int match=1;
    for(int i=0;i<strlen(s)/2;i++){
        if(s[i]!=s[strlen(s)-i-1]){
            match=0;
            break;
        }
    }
    if(match==1) printf("Yes");
    else printf("No"); 
}

int main() {
    char str[100];
    scanf("%s",str);
    Modify(str);
    return 0;
}
