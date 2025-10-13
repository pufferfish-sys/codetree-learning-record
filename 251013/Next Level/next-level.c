#include <stdio.h>
#include <string.h>

struct Level {
    char id[100];
    int lv;
};

void initLevel(struct Level *user, const char *id, int lv) {
    strcpy(user->id, id);  // 문자열 복사
    user->lv = lv;         // 레벨 설정
}

int main() {
    char user2_id[100];
    int user2_level;

    scanf("%s %d", user2_id, &user2_level);

    struct Level level1;
    struct Level level2;

    initLevel(&level1, "codetree", 10);
    initLevel(&level2, user2_id, user2_level);

    printf("user %s lv %d\n", level1.id, level1.lv);
    printf("user %s lv %d\n", level2.id, level2.lv);

    return 0;
}
