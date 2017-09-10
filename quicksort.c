#include<stdio.h>
int quicksort(int a[],int p,int q);
int part(int a[],int p,int q);
int a[100],n;
int main()
{
    int i,j,k,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    quicksort(a,1,n);
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
int part(int a[],int p,int q)
{
    int x,i,temp,j;
    x=a[q];
    i=p-1;
    for(j=p;j<=q-1;j++)
    {
        if(a[j]<=x)
        {
            i=i+1;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[q];
    a[q]=temp;
    return i+1;
}
int quicksort(int a[],int p,int q)
{
    int r;
    if(p<q)
    {
        r = part(a,p,q);
        quicksort(a,p,r-1);
        quicksort(a,r+1,q);
    }
}
