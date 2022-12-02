#include<stdio.h>
#include<time.h>
void main(){
    clock_t start,end;
    double cpu_time_used;
    start = clock();

    int n,i,ans=1;
    printf("enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
    ans=ans*i;
     
    }
     printf("factorial:%d\n",ans);
     
     end = clock();
     cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
     printf("time taken:%f",cpu_time_used);
}