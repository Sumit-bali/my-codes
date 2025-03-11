//. Given two matrices, write a function to find whether these two are identical.
#include <stdio.h>
int main(){
    int a[3][3],b[3][3];
    printf("Enter the elements of first matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }

    }
    printf("Enter the elements of second matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (a[i][j]!=b[i][j]){
                printf("the matrices are not identical\n");
                return 0;
            }

        }
    }
    printf("the matrices are identical\n");
    return 0;
}