#include <stdio.h>

int main() {
  int n;
  printf("enter the number");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
      for(int k=0;k<n-i;k++)  
      {
          printf(" ");
      }
      for(int j=0;j<=2*i;j++)
      {
          printf("*");
      }
      printf("\n");
    }
    return 0;
}