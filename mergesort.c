#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll;
    char name;
    int marks;
};
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + j + 1];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
}
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{

    int i, n;
    struct student s[n];
    struct student *p;
    printf("enter n");
    scanf("%d", &n);
    p = (struct student *)malloc(n * sizeof(struct student));
    p = s[n].roll;
    printf("enter the array of roll number");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p->roll);
        p++;
    }
    printf("enter the array of name\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter name %d", i);
        scanf("%c", p->name);
        p++;
    }
    printf("enter the array of marks");
    for (i = 0; i < n; i++)
    {
        printf("enter marks");
        scanf("%d", p->marks);
        p++;
    }
    merge_sort(p->roll, 0, n - 1);
    printf("array after sorted\n");
    for (i = 0; i < n; i++)

    {
        printf("Name :%c", p->name);
        printf("%d\n", p->roll);
        p++;
    }
    return 0;
}
