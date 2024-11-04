#include <stdio.h>

int main() {
    int t=0;// for operations count (time complexity)
    int s=0; // for space complexity in bytes
    int i,j,n, temp;
    s+=4*sizeof(int);
    printf("Enter no. of elements:");
    t++; // for print statement
    scanf("%d",&n);
    t++; // for scanf
    int a[n];
    s+=n*sizeof(int);
    printf("Enter the elements:");
    t++; // for print statement
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
        t++; //for scanf
        t++; //for loop increment
    }
    t++; //for loop conditional
    for (i=0;i<n;i++){
        for (j=0;j<n-1-i;j++){
            if (a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                t+=4; //for swap operations
                t++; //for if condition
            }
            t++; //for inner loop increment
        }
        t++; //for inner loop conditional
        t++; //for outer loop increment
    }
    t++; //for outer loop conditional
    printf("\nSorted Array:");
    t++; //for print statement
    for (i=0;i<n;i++){
        printf("%d  ",a[i]);
        t++; //for print statement
        t++; //for loop increment
    }
    t++; //for loop conditional
    printf("\nTotal operations (t): %d", t);
    printf("\nEstimated space used (s): %d bytes\n", s);
    
    return 0;
}
