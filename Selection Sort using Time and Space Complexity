#include <stdio.h>

int main() {
    int i, temp, j, min, n;
    int t = 0; // Initialize operation counter
    int s = 0; // Initialize space used counter

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int a[n]; 
    s += n * sizeof(int); // Space for array

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        t++; // Operation for each input
    }

    for (i = 0; i < n - 1; i++) {
        min = i;
        t++; // Initialization of min
        for (j = i + 1; j < n; j++) {
            if (a[min] > a[j]) {
                min = j;
                t += 2; // Operation for assignment and if condition
            }
            t++; // Inner loop increment
        }
        t++; // Inner loop conditional
        if (i != min) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            t += 3; // Three swap operations
        }
        t++; // Outer loop increment
    }
    t++; // Outer loop conditional

    printf("Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
        t++; // Operation for printing each element
    }
    t++; // Final increment for loop

    printf("\nTotal operations (t): %d", t);
    printf("\nEstimated space used (s): %d bytes\n", s);
    
    return 0;
}
