#include <stdio.h>

int main() {
    // Please write your code here.
    int n,q,k,arr[100],start;
    int a,b,s,e,flag=0;
    scanf("%d %d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<q;i++){
        scanf("%d ",&start);{
            if(start==1){
                scanf("%d ",&a);
                printf("%d\n",arr[a-1]);
            }
            else if(start==2){
                flag=0;
                scanf("%d ",&b);
                for(int j=0;j<n;j++){
                    if(arr[j]==b){
                        flag=1;
                        printf("%d\n",j+1);
                    break;
                    }
                }
                if(flag==0){
                    printf("0\n");
                }
            }
            else if(start==3){
                scanf("%d %d",&s,&e);
                for(int j=s-1;j<e;j++){
                    printf("%d ",arr[j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}