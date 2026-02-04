#include<stdio.h>
int main(){
    int i,j,r,c,m[4][4],m1[4][4],sum[4][4];
    printf("Enetr the 1st matrix=\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Element of [%d][%d]=",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    
    printf("Enetr the 2nd matrix=\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Element of [%d][%d]=",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    
    printf("Enetr the Sum of matrix=\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
        sum[i][j]=m[i][j]*m1[i][j];
        }
    }
    printf("Result of matrix=\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("[%d] [%d]= %d\n",i+1,j+1,sum[i][j]);
            
        }
    }
    return 0;
}