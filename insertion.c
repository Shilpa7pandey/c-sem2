#include<stdio.h>
#include<stdlib.h>

FILE *ptr;
ptr=fopen("num.txt",);
char c;
void insertion_sort(int a[],int n)
{
    int i,j,key,temp;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
         while(a[j]>key && j>=0) 
         {
           a[j+1]=a[j];
           j--;
         }
          a[j+1]=key;
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
    insertion_sort(a,n);

printf("array after sorted\n");
    for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
    return 0;

}
