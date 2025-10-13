#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct{
    char name[11];
    char address[11];
    char region[11];
} Person;

Person people[10];

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s %s", people[i].name, people[i].address, people[i].region);
    }

    // 정렬: name 기준 오름차순
    sort(people, people + n, [](const Person &a, const Person &b) {
        return strcmp(a.name, b.name) < 0; // strcmp < 0이면 a < b
    });

    // 가장 사전적으로 늦은 사람: 마지막 원소
    printf("name %s\n", people[n-1].name);
    printf("addr %s\n", people[n-1].address);
    printf("city %s\n", people[n-1].region);

    return 0;
}
