#include <stdio.h>
#include <string.h>

int aff2(int I){
    char arr[10];
    sprintf(arr, "%d", I);
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == '3' || arr[i] == '6' || arr[i] == '9'){
            return 1; 
        }
    }
    return 0;
}

void aff(int A, int B){
    int cnt = 0;
    for(int i = A; i <= B; i++){
        if(aff2(i) || i % 3 == 0){
            cnt++;
        }
    }
    printf("%d\n", cnt);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    aff(a, b);
    return 0;
}
