#include <stdio.h>
#include <string.h>

int main() {
    char arr[100], arr2[100], temp;
    int cnt = 0;

    scanf("%s", arr);
    scanf("%s", arr2);
    int len = strlen(arr);

    for (int j = 0; j < len; j++) {
        if (strcmp(arr, arr2) == 0) {
            printf("%d", cnt);
            return 0;
        }
        temp = arr[len - 1];
        for (int i = len - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        cnt++;
    }
    printf("-1");
    return 0;
}
