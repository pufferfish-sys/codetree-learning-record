#include <stdio.h>
#define MAX_N 50
int n;
int arr[MAX_N];

void abs(int *x){
    for(int i=0;i<n;i++){
        if(x[i]<0){
        x[i]=-x[i];}
    }
    return;
}



int main() {

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    abs(arr);
    for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }

    return 0;
}