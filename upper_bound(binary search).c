#include<stdio.h>
int main()
{
    int n,i,j,num,l,r,mid;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    l=0;
    r=n;
    while(l<r)
    {
        mid=(l+r)/2;
        if(num>=arr[mid])
        l=mid+1;
        else
        r=mid;
    }
    printf("%d",r);
}
