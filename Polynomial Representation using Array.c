#include <stdio.h>
struct poly{
    int coeff, exp;
};
struct poly p[10];
int main() {
    int t, i;
    printf("Enter no. of terms in the polynomial:");
    scanf("%d",&t);
    printf("Enter the coefficent and exponent in descending order:\n");
    for (i=0;i<t; i++){
        printf("Enter the coefficient of term %d:",i+1);
        scanf("%d",&p[i].coeff);
        printf("Enter the exponent of term %d:",i+1);
        scanf("%d",&p[i].exp);
    }
    printf("\nPolynomial is :");
    for (i=0;i<t; i++){
        printf("%dX^%d",p[i].coeff, p[i].exp);
        if (i!=t-1){
            printf(" + ");
        }
    }
    return 0;
}
