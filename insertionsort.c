#include<stdio.h>
void optimized_bubble_sort(int a[],int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    { flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
            int k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
            flag=1;
            }
        }
        if(flag==0)
        break;
    }

}
int main()
{  int i,n;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    optimized_bubble_sort(a,n);
    printf("array after sorted\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    return 0;

}
