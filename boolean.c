
#include <stdio.h>

int main() {
    int n,a[10];
    printf("enter the value ");
    scanf("%d",&n);
   int count=0;
    while(n>0)
    {
     a[count]=n%2;
     n=n/2;
     count++;
    }
    for(int j=count;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}
