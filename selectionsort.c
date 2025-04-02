#include<stdio.h>
void main()
{
    int a[10];
    int n;
    printf("enter the size of array less than 10");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for( int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
               min=j;
            }
        }
        if(min!=i)
        {
            int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}