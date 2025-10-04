#include <stdio.h>

int main() {
    // Please write your code here.
    int arr[2][4],sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d ",&arr[i][j]);
        }
    }
    
    for(int i=0;i<2;i++){
        sum =0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        double avg2 = (double) sum/4;
        printf("%.1lf ",avg2);
    }
    printf("\n");
    for(int i=0;i<4;i++){
        sum =0;
        for(int j=0;j<2;j++){
            sum+=arr[j][i];
        }
        double avg3 = (double) sum/2;
        printf("%.1lf ",avg3);
    }
    printf("\n");
    sum =0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
    }
    double avg = (double) sum/8;
    printf("%.1lf ",avg);




    return 0;
}