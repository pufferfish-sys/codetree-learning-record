#include <stdio.h>
#include <string.h>
int main() {
    // Please write your code here.
    char a[1000];
    scanf("%s",a);
    int len = strlen(a);
    int i = 0,c=0,length=0;
    while(i<len){
        int sum=0,cnt=0,b;
        while(a[i]==a[c]){
            c++;
            cnt++;
        }
        if(cnt<10){b=1;}
        else if(cnt>=10&&cnt<100){
            b=2;
        }
        else if(cnt>=100&&cnt<1000){
            b=3;
        }
        else{
            b=4;
        }
        length+=1+b;
        i=c;
    }
    c=0;i=0;
    printf("%d\n",length);

    while(i<len){
        int sum=0;
        while(a[i]==a[c]){
            sum++;
            c++;
        }
        printf("%c%d",a[i],sum);
        i = c;
    }


    return 0;
}