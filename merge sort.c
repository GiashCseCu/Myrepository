#include<stdio.h>
int Merge(int a[],int p,int q,int r);
int mergesort(int a[],int p,int r);
int main()
{
    int i,j,z,n,k,a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    mergesort(a,1,n);
    for(z=1;z<=n;z++)
        printf("%d",a[z]);
    return 0;
}
int Merge(int a[],int p,int q,int r)
{
    int n1,n2,i,k,j;
    n1=q-p+1;
    n2=r-q;
    int L[n1+1], R[n2+1];
    for(i=1;i<=n1;i++)
        L[i]=a[p+i-1];
    for(j=1;j<=n2;j++)
        R[j]=a[q+j];
    L[n1+1]=9999999;
    R[n2+1]=9999999;
    i=1;
    j=1;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i=i+1;
        }
            else
            {
                a[k]=R[j];
                j=j+1;
            }
        }

            }
            int mergesort(int a[],int p,int r)
            {
                int q;
                if(p<r)
                {
                    q=(p+r)/2;
                    mergesort(a,p,q);
                    mergesort(a,q+1,r);
                    Merge(a,p,q,r);
                }
            }


