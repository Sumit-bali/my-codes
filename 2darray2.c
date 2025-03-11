//Program to find the transpose of a given matrix
#include <stdio.h>
int main()
{
    int a[3][3],c[3][3];
    printf("enter the elements for the array \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("the original matrix is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
  printf("the transpose of the matrix is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[j][i];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
