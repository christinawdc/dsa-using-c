#include <stdio.h>

int main() {
    int r, c, i, j, k=1,sparse[20][20],compact[20][20];
    printf("\nEnter the no. of rows:");
    scanf("%d",&r);
    printf("\nEnter the no. of columns:");
    scanf("%d",&c);
    printf("Enter the values:");
    for (i=0;i<r; i++){
        for (j=0;j<c;j++){
            scanf("%d",&sparse[i][j]);
        }
    }
    compact[0][0]=r;
    compact[0][1]=c;
    for (i=0;i<r; i++){
        for (j=0;j<c;j++){
            if(sparse[i][j]!=0){
                compact[k][0]=i;
                compact[k][1]=j;
                compact[k][2]=sparse[i][j];
                k++;
            }
            }
        }
    compact[0][2]=k-1;
     for (i=0;i<k; i++){
        for (j=0;j<3;j++){
            printf("%d\t",compact[i][j]);
            }
            printf("\n");
        }
    
    
    return 0;
}
