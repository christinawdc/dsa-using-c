#include <stdio.h>

int main() {
    int x, n, i,mid,flag = 0;
    int t = 1; // Initialize t for operations count
    int s = 4 * sizeof(int); // Space for integers (x, n, i, flag)
    printf("\nEnter the number of elements: ");
    t++; // For printf
    scanf("%d", &n);
    t++; // For scanf
    
    int left=0, right= n-1;
    t+=2;
    s+=sizeof(int)*2;
    int a[n]; // Variable-length array
    s += sizeof(int) * n; // Space for the array
    t++; // For array declaration

    printf("\nEnter the elements in ascending order: ");
    t++; // For printf
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        t++; // For scanf
        t++; // For loop increment
    }
    t++; // For loop conditional

    printf("\nEnter the value to be found: ");
    t++; // For printf
    scanf("%d", &x);
    t++; // For scanf

    while (left<=right) {
        mid= (left+right)/2;
        t++;
        if (x == a[mid]) {
            flag=1;
            t++;
            t++; // For if condition
            break;
        }
        if (x>a[mid]) {
            left= mid+1;
            t++;
            t++; //for if condition
        }
        if (x<a[mid]){
            right= mid-1;
            t++;
            t++; //for if condition
        }
    }
    t++; // For while loop conditional

    if (flag==1) {
        printf("\nNumber found at index %d", mid);
        t++; // For printf
        t++; // For if condition
    } else {
        printf("\nNumber not found.");
        t++; // For printf
        t++; //for else
    }
    
    t++; // Final increment for returning
    
    
    printf("\nTotal operations (t): %d", t);
    printf("\nEstimated space used (s): %d bytes\n", s);

    return 0; 
}
