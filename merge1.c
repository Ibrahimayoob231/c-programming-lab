#include <stdio.h>
#include <stdlib.h>

void readArray(int[], int);
void printArray(int[], int);
void merge(int[], int[], int[], int, int);

int main()
{
    int ar1[20], ar2[20], ar3[40];
    int m, n;

    printf("no of elements in 1st array [1-20]: ");
    scanf("%d", &m);
    printf("Enter the elements in decreasing order:\n");
    readArray(ar1, m);

    printf("no of elements in 2nd array: ");
    scanf("%d", &n);
    printf("Enter the elements in non decreasing order:\n");
    readArray(ar2, n);  
    merge(ar1, ar2, ar3, m, n);

    printf("merged array:\n");
    printArray(ar3, m + n);

    return 0;
}

void readArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
}

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d ", a[i]);  
    printf("\n");
}

void merge(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0, k = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];
    while (j < n)
        c[k++] = b[j++];
}

