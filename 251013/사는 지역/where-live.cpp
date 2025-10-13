#include <stdio.h>
#include <string.h>

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

    int last_idx = 0;
    for(int i = 1; i < n; i++) {
        if(people[i].name > people[last_idx].name)
            last_idx = i;
    }

    printf("name %s\n", people[last_idx].name);
    printf("addr %s\n", people[last_idx].address);
    printf("city %s\n", people[last_idx].region);

    return 0;
}

