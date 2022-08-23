#include<stdio.h>//ascending;
int partition(int a[],int l,int r)
{
    int pivot =a[l];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
      if(a[j]<pivot)
      {
          i++;
          int temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
    }
    int temp1=a[i+1];
          a[i+1]=a[r];
          a[r]=temp1;
   return i+1;
}
void quick_sort(int a[] ,int l,int r)
{
    if(l<r)
    {int p;
    p=partition( a,l,r);
    quick_sort(a,l,p-1);
    quick_sort(a,p+1,r);
    }
}
int main()
{
  int i,n;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    quick_sort(a,0,n-1);

    printf("array after sorted\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    return 0;

}
