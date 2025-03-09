#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       
        for(int j=n-i;j>0;j--)
        {
            printf("* ");
        }
        
        printf("\n");
    }
}