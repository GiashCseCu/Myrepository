#include<stdio.h>
int main()
{
    int a[100] , i , j , n, temp;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            }
         for(i=1;i<=n;i++){
        for(j=n;j>=i+1;j--)
        {
            if (a[j]<a[j-1])
                {
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
           }
        }
         }
        for(i=1;i<=n;i++)
            printf("%d ",a[i]);

      return 0;
    }
}
