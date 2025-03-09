#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    while(n%2==0)
    {
        printf("\nenter the odd number\n");
        scanf("%d",&n);
    }
    for(int i=0;i<n;i++)
    {
       
        for(int j=0;j<n;j++)
        {
            if(j==i || j==(n-1-i))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}