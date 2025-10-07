#include <stdio.h>

int c1(int n){ return n % 2 == 0; }
int c2(int n){ return n % 10 == 5; }
int c3(int n){ return (n % 3 == 0 && n % 9 != 0); }

int main() {
    int A, B, cnt = 0;
    scanf("%d %d", &A, &B);

    for(int i = A; i <= B; i++){
        if(!c1(i) && !c2(i) && !c3(i))
            cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}
