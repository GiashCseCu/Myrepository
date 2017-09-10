#include<bits/stdc++.h>
using namespace std;

struct priority{

   double b,p;
   string str;
   bool operator<(const priority & B) const{
   return p>B.p;
   }
};


int main()
{
    double arr[10000],b,p,av,tr,sum=0,tym=0;
    string str1[1000];
    int i,n;
    string str;
    priority_queue<priority>pq;
    priority z;
    printf("Priority Scheduling :\n\n\n");
    printf("Enter number of process : ");
    cin>>n;
    printf("Process   Burst time   Priority\n\n");

    for(i=0;i<n;i++){
    cin>>z.str>>z.b>>z.p;
    pq.push(z);
    }

    printf("\n\nScheduled process according to priority scheduling given below :\n\n");

    i=0;
    int j=0;
    arr[j]=0;
    j++;
    while(!pq.empty())
    {
        z=pq.top();
        str1[i]=z.str;
        tym=tym+z.b;
        arr[j]=tym;
        sum=sum+tym;
        pq.pop();
        i++;
        j++;
    }
    int k,l,m;
    k=j;
    cout<<endl<<endl;
    l=0;
    printf("Gantt Chart\n\n");
    for(i=0;i<n;i++)
    {
        for(j=1;j<arr[l+1]-arr[l]+5;j++)
            cout<<"-";
        l++;
    }
    cout<<"---"<<endl;
    l=0;
    for(i=0;i<n;i++)
    {

            cout<<"| "<<str1[i]<<" ";
            for(j=1;j<arr[l+1]-arr[l];j++)
                cout<<" ";
        l++;
    }
    cout<<"   |"<<endl;
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=1;j<arr[l+1]-arr[l]+5;j++)
            cout<<"-";
        l++;
    }
    cout<<"---"<<endl;
     l=0;
    for(i=0;i<n;i++)
    {
        cout<<arr[l];
        for(j=1;j<arr[l+1]-arr[l]+4;j++)
            cout<<" ";
        l++;
    }
    cout<<arr[l];
    cout<<endl<<endl;
    printf("The average waiting time is %.2lf miliseconds.\n\n",(sum-tym)/5);
    printf("The turn around time is %.2lf miliseconds.\n\n",(sum)/5);
    return 0;
}
