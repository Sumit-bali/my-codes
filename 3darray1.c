#include<stdio.h>
int d[4][4][4];
int main(){
    for(int i=0;i<4;i++){
    printf("you are in table %d\n",i+1);
    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            scanf("%d",&d[i][j][k]);
        }
    }
}
for(int i=0;i<4;i++){
    printf("you are in table %d\n",i+1);
    for(int j=0;j<4;j++){
        for(int k=0;k<4;k++){
            printf("%d ",d[i][j][k]);
        }
        printf("\n");
    }
}
}
