#include<stdio.h>
int main(){
    int a[3][3];
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        int sum=0;
        printf("the sum of the elements of row %d is ",i+1);
        for(int j=0;j<3;j++)
        {
            sum+=a[i][j];
        }
        printf("%d\n",sum);
    }
    for(int i=0;i<3;i++){
        int sum=0;
        printf("the sum of the elements of column %d is ",i+1);
        for(int j=0;j<3;j++)
        {
            sum+=a[j][i];
        }
        printf("%d\n",sum);
    }
    
}
