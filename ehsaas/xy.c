#include<stdio.h>
#include<time.h>
void main(){
    clock_t start,end;
    double cpu_time_used;
    start = clock();

    int x,y,i,ans=1;
    printf("enter the x:");
    scanf("%d",&x);
    printf("enter the y:");
    scanf("%d",&y);

    for(i=1;i<=y;i++){
        ans=ans*x;
    }
        printf("answer:%d\n",ans);
 
     end = clock();
     cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
     printf("time taken:%f",cpu_time_used);
}