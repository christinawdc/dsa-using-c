#include <stdio.h>

int main() {
    int r,c,i,j,k,size=0;
    printf("Enter the no. of rows and columns:");
    scanf("%d%d",&r,&c);
    int s[r][c];
    printf("Enter the matrix elements:");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            scanf("%d",&s[i][j]);
            if (s[i][j]!=0){
                size++;
            }
        }
    }
     printf("Sparse matrix:\n");
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("%d\t",s[i][j]);
            }
            printf("\n");
        }
    
    int compact[size][3];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
        if (s[i][j]!=0){
            for(k=1;k<size;k++){
                compact[k][0]=i;
                compact[k][1]=j;
                compact[k][2]=s[i][j];
            }
        }
    }}
    compact[0][0]=r;
    compact[0][1]=c;
    compact[0][2]=size;
    printf("Compact matrix is : \n");
    printf("Row\tCol\tVal\n");
    for(i=0;i<size;i++){
        for(j=0;j<3;j++){
            printf("%d\t",compact[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}
