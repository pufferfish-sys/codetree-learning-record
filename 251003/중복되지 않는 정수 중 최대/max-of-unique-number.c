#include <stdio.h>

int main() {
    int n, arr[1000], count[1000] = {0,}, max = -1;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(count[arr[i]] == 1 && arr[i] > max){
            max = arr[i];
        }
    }

    printf("%d", max);

    return 0;
}
