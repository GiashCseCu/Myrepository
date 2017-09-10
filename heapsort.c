#include<stdio.h>
int buildmaxheap(int a[],int h);
int maxheapify(int a[],int i,int h);
int heapsort(int a[],int h);
int Left(int i);`
int Right(int i);
int a[100];
int main()
{
    int i,j,k,l,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
      heapsort(a,n);
      for(i=1;i<=n;i++)
        printf("%d ",a[i]);
      return 0;
}
int Left(int i)
{
    return 2*i;
}
int Right(int i)
{
    return (2*i)+1;
}
int buildmaxheap(int a[],int h)
{
    int hs,j,i;
    for(i=h/2;i>=1;i--)
        maxheapify(a,i,h);
}
int maxheapify(int a[],int i,int h)
{
    int l,r,largest,temp;
    l = Left(i);
    r = Right(i);
    if((l<=h)&&(a[l]>a[i]))
        largest = l;
    else
        largest = i;
    if((r<=h)&&(a[r]>a[largest]))
        largest = r;
    if(largest!=i)
    {
        temp=a[i];
        a[i]=a[largest];
        a[largest]=temp;
        maxheapify(a,largest,h);
    }
}
int heapsort(int a[],int h)
{
    int i,j,k,temp;
    buildmaxheap(a,h);
    for(i=h;i>=2;i--)
    {
        temp=a[i];
        a[i]=a[1];
        a[1]=temp;
        h=h-1;
        maxheapify(a,1,h);
    }

}
