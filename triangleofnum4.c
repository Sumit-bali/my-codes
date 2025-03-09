#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
   
    for(int i=0;i<=n;i++)
    {
       for(int k=0;k<=n-i;k++)
       {
        printf(" ");
       }
        for(int j=1;j<=i;j++)
        {
          
                printf("%d",j);   
            
        }
        for(int l=1;l<i;l++){
            printf("%d",i-l);
        }
        printf("\n");

    
    }
}