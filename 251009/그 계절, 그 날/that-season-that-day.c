#include <stdio.h>

void check(int n) {
    if (n >= 3 && n <= 5) printf("Spring");
    else if (n >= 6 && n <= 8) printf("Summer");
    else if (n >= 9 && n <= 11) printf("Fall");
    else printf("Winter");
}

void season(int Y, int M, int D) {
    int days = 0;

    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) days = 31;
    else if (M == 4 || M == 6 || M == 9 || M == 11) days = 30;
    else if (M == 2) {
        days = ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) ? 29 : 28;
    } else {
        printf("-1");
        return;
    }

    if (D >= 1 && D <= days) check(M);
    else printf("-1");
}

int main() {
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    season(y, m, d);
    return 0;
}
