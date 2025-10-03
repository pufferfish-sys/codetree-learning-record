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
                scanf("%d ",&b);
                for(int i=0;i<n;i++){
                    if(arr[i]==b){
                        flag=1;
                        printf("%d\n",i+1);
                    break;
                    }
                }
                if(flag==0){
                    printf("0\n");
                }
            }
            else if(start==3){
                scanf("%d %d",&s,&e);
                for(int i=s-1;i<e;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}