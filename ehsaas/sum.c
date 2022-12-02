#include<stdio.h>
#include<time.h>
void main(){
    clock_t start,end;
    double cpu_time_used;
    start = clock();

    int n,i,sum=0;
    printf("enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
    sum=sum+i;
     
    }
     printf("Sum:%d\n",sum);
     
     end = clock();
     cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
     printf("time taken:%f",cpu_time_used);
}