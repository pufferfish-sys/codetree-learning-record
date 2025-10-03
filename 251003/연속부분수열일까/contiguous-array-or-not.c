#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100], cnt = 0, k = 0;
    scanf("%d %d", &n1, &n2);
    for(int i = 0; i < n1; i++) scanf("%d", &arr1[i]);
    for(int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    for(int i = 0; i < n1; i++){
        if(arr1[i] == arr2[k]){
            cnt++;
            k++;
            if(cnt == n2) break;
        } else {
            cnt = 0;
            k = 0;
        }
    }

    if(cnt == n2) printf("Yes");
    else printf("No");

    return 0;
}
