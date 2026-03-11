#include <stdio.h>
#include <stdlib.h>

int main(){
    int r,c;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    int **a, **b, **sub;

    a = (int**)malloc(r*sizeof(int*));
    b = (int**)malloc(r*sizeof(int*));
    sub = (int**)malloc(r*sizeof(int*));

    for(int i=0;i<r;i++){
        a[i]=(int*)malloc(c*sizeof(int));
        b[i]=(int*)malloc(c*sizeof(int));
        sub[i]=(int*)malloc(c*sizeof(int));
    }

    printf("Enter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            sub[i][j] = a[i][j] - b[i][j];

    printf("Subtracted Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",sub[i][j]);
        printf("\n");
    }
}
