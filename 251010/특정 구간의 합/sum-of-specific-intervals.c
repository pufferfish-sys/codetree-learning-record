#include <stdio.h>

int arr[101];
int queryA1[101];
int queryA2[101];

int sumf(int a){
    int sum=0;
    for(int j=0;j<a;j++){
    for(int i=queryA1[j];i<=queryA2[j];i++){
        sum+=arr[i];
    }
    printf("%d\n",sum);
    sum=0;
    }
}


int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    
    for(i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < m; i++) {
        scanf("%d %d", &queryA1[i], &queryA2[i]);
    }
    sumf(m);
    // Please write your code here.
    return 0;
}