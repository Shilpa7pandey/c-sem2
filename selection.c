#include<stdio.h>
void selection_sort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=a[i];
        for(j=i+1;j<n;j++)
        {
         if(a[j]>min)
         {
             min=a[j];
             j=temp;
         }
        }
        int k=a[i];
        a[i]=a[temp];
        a[temp]=k;
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
    selection_sort(a,n);

printf("array after sorted\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    return 0;

}
