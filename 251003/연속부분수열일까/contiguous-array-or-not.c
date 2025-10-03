#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], cnt = 0;
    scanf("%d %d", &n1, &n2);

    for(int i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }

    int found = 0;
    for(int i = 0; i <= n1 - n2; i++){
        cnt = 0;
        for(int j = 0; j < n2; j++){
            if(arr1[i + j] == arr2[j]){
                cnt++;
            } else {
                break;
            }
        }
        if(cnt == n2){
            found = 1;
            break;
        }
    }

    if(found){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}