#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
          if(j==i ||( i%2==0 && j==2)||(i%2!=0 && j==1))
                printf("1 ");
            else
            {
                printf("0 ");
            }
        }
                  printf("\n");

    
    }
}