#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int a[100],i, j, k, n, key ;
    time_t t;
    clock_t ,start_t , end_t;
    float total_t;
    printf("How many random numbers?:");

    while(scanf("%d",&n)==1)
        srand((unsigned) time(&t));
    {
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
      }

      for(j=2;j<=n;j++)
        a[j]=rand() % 50;
      {
          key=a[j];
          k=j-1;
          while(k>0 && a[k]>key)
          {
              a[k+1]=a[k];
              k=k-1;
              }
              a[k+1]=key;
      }
      total_t=double(end_t - start_t);

      for(i=1;i<=n;i++)
        printf("%d ",a[i]);

       return 0;
    }
}


