#include <stdio.h>

int main() {
    int x, n, i, count = 0;
    int t = 1; // Initialize t for operations count
    int s = 4 * sizeof(int); // Space for integers (x, n, i, count)
    printf("Enter the number of elements: ");
    t++; // For printf
    scanf("%d", &n);
    t++; // For scanf
    
    int a[n]; // Variable-length array
    s += sizeof(int) * n; // Space for the array
    t++; // For array declaration

    printf("Enter the elements: ");
    t++; // For printf
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        t++; // For scanf
        t++; // For loop increment
    }
    t++; // For loop conditional

    printf("Enter the value to be found: ");
    t++; // For printf
    scanf("%d", &x);
    t++; // For scanf

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
            t++; // For count increment
            t++; // For if condition
            printf("\nNumber found at index %d", i);
            t++; // For printf
        }
        t++; // For loop increment
    }
    t++; // For loop conditional

    if (count > 0) {
        printf("\nNumber found %d times", count);
        t++; // For printf
        t++; // For if condition
    } else {
        printf("Number not found.");
        t++; // For printf
    }
    
    t++; // Final increment for returning
    
    
    printf("\nTotal operations (t): %d", t);
    printf("\nEstimated space used (s): %d bytes\n", s);

    return 0; 
}
