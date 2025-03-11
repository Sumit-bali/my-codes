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
        for(int j=0;j<3;j++){
            if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0)){
                printf("the matrix is not an identity matrix\n");
                return 0;
            }
        }
    }
    printf("the matrix is an identity matrix\n");
    return 0;
}