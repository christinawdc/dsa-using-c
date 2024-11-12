
#include <stdio.h>

int main() {
    int n,pos;
    printf("Enter the no. of elements in binary tree:");
    scanf("%d",&n);
    int a[n+1];
    printf("\nEnter the elements:");
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    while (1){
        printf("\nEnter the position of node(from 1 to %d) or 0 to exit:",n);
        scanf("%d",&pos);
        if (pos==0){
            printf("Exiting...");
            return 0;
        }
        if (pos==1){
            printf("\nThis is the root node.");
        }
        else {
            printf("\nThe position of node is %d and its value is %d",pos, a[pos]);
            printf("\nThe parent node is %d",pos/2);
        }
        int leftchildindex=2*pos;
        int rightchildindex=(2*pos)+1;
        if (leftchildindex>n){
            printf("\nThis node has no left child.");
        }
        else printf("\nThe left child index is %d and its value is %d",leftchildindex,a[leftchildindex]);
        if (rightchildindex>n){
            printf("\nThis node has no right child.");
        }
        else printf("\nThe right child index is %d and its value is %d",rightchildindex,a[rightchildindex]);
        
    }
   

    return 0;
}
