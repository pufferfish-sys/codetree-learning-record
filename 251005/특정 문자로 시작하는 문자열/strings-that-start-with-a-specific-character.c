#include <stdio.h>
#include <string.h>
int main() {
    int n,sum=0,cnt=0;
    char arr[20][21],c;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    scanf(" %c",&c);
    for(int i=0;i<n;i++){
        if(arr[i][0]==c){
            cnt++;
            sum+=strlen(arr[i]);
        }
    }
    double avg = (double)sum/cnt;
    printf("%d %.2lf",cnt,avg);
    return 0;
}