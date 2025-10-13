#include <stdio.h>
#include <string.h>

struct Level {
    char id[100];
    int lv;
};

int main() {
    char user2_id[100];
    int user2_level;

    scanf("%s %d", user2_id, &user2_level);

    struct Level level1;
    strcpy(level1.id, "codetree");
    level1.lv = 10;

    struct Level level2;
    strcpy(level2.id, user2_id);
    level2.lv = user2_level;

    printf("user %s lv %d\n", level1.id, level1.lv);
    printf("user %s lv %d\n", level2.id, level2.lv);

    return 0;
}

