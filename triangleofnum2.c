#include<stdio.h>
int main()
{
    int n;
    int count=1;
    printf("enter the number");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<i+1;j++)
        {  
                printf("%d ",count);
                count++;
            }
          
        
        printf("\n");

    
    }
}