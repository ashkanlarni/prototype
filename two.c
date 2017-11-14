#include <stdio.h>

int j;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int p, int r, int num[6])
{
    int x = num[r];
    int i = p - 1;
    int j;
    for (j=p; j<r; j++)
        if (num[j] <= x)
            swap(&num[j], &num[++i]);
    swap(&num[++i], &num[r]);
    return i;
}

void quick_sort(int a[6], int low, int high)
{
    if (low < high)
    {
        int piv = partition(low, high, a);
        quick_sort(a,low, piv-1);
        quick_sort(a, piv+1, high);
    }
}

int bs(int a[], int n, j, low, high )
{
    if (j==2)
    {
        if (n==a[j] || n==a[j-1])
            return 1;
        else
            return 0;
    }
    if (j>2)
    {
        j=(low+high)/2;
        if (n==a[j])
          return 1;
        if (n>a[j])
            return bs(a, n, j, j, high);
        else
            return bs(a, n, j, low, j);
    }
}

int main()
{
    scanf("%d", &j);
    int low=0, high=j, N=j;
    int a[10];
    int i, n;
    for (i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n);
    quick_sort(a, 0, j);
    if
    return 0;
}