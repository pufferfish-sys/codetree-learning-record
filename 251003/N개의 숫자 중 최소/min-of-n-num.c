#include <stdio.h>
#include <limits.h>

int main() {
    // Please write your code here.
    int n,arr[100],min=INT_MAX,cnt=0;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min==arr[i]){
            cnt++;
        }
    }
    printf("%d %d",min,cnt);
    return 0;
}