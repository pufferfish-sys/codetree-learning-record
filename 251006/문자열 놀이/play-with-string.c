#include <stdio.h>
#include <string.h>

int main() {
    char arr[100], x, y,temp;
    int a, b, q, c;

    scanf("%s", arr);
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf(" %d", &c);

        if (c == 1) {
            scanf("%d %d", &a, &b);
            temp =arr[a-1];
            arr[a-1]=arr[b-1];
            arr[b-1]=temp;
            printf("%s\n", arr);
        } 
        else {
            scanf(" %c %c", &x, &y);
            for (int j = 0; j < strlen(arr); j++) {
                if (arr[j] == x) {
                    arr[j] = y;
                }
            }
            printf("%s\n", arr);
        }
    }

    return 0;
}
