#include <stdio.h>
#include <string.h>

int main() {
    char a[1001];
    char b[3];
    int ans = 0;
    
    scanf("%s", a);
    scanf("%s", b);
    
    int len = strlen(a);
    
    for(int i = 0; i < len - 1; i++)
        if(a[i] == b[0] && a[i + 1] == b[1])
            ans++;
    
    printf("%d\n", ans);
    
    return 0;
}
