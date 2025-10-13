#include <stdio.h>
#include <string.h>
char input_id[11];
int input_code;

typedef struct{
    char input_d[11];
    int input_c;
}item;
int main() {
    scanf("%10s %d", input_id, &input_code);
    item a;
    strcpy(a.input_d,"codetree");
    a.input_c=50;
    item b;
    strcpy(b.input_d,input_id);
    b.input_c=input_code;
    printf("product %d is %s\n",a.input_c,a.input_d);
    printf("product %d is %s",b.input_c,b.input_d);
    return 0;
}