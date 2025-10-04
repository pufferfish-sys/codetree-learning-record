#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char str1[20],str2[20];
    scanf("%s ",str1);
    scanf("%s",str2);
    
    if(strlen(str1)>strlen(str2)){
        printf("%s %d",str1,strlen(str1));
    }
    else if(strlen(str2)>strlen(str1))
    {printf("%s %d",str2,strlen(str2));
}   else{
    printf("same");
}
    return 0;
}