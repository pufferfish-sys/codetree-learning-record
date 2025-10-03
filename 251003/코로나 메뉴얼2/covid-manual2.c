#include <stdio.h>

int main() {
    // Please write your code here.
    char c;
    int n,count[4]={0,};
    for(int i=0;i<3;i++){
        scanf("%c %d\n",&c,&n);
        if(c=='Y'){
            if(n>=37){
                count[0]++;
            }
            else{
                count[2]++;
            }
        }
        else{
            if(n>=37){
                count[1]++;
            }
            else{
                count[3]++;
            }
        }
    }
    for(int i=0;i<4;i++){
        printf("%d ",count[i]);
    }
    if(count[0]>=2){
        printf("E");
    }
    
    return 0;
}