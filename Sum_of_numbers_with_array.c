#include<stdio.h>
int main()
{
    int i, n;
    printf("Enter the total input data size(N): ");
    scanf("%d", &n);
    float x[n];

    printf("\nEnter N real value: ");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
        printf("x[ %d] = %.2f\n", i + 1, x[i]);
    }

    float total = 0.0;
    for(i = 0; i < n; i++)
    {
         total += x[i] * x[i];
    }
    printf("\n");

    printf("Total: %.2f\n", total);
}
