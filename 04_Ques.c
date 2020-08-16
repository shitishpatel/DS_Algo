#include <stdio.h>

int main()
{
    int n, i, c1 = 0, c2 = 0, c3 = 0, temp, min = 0, flag = 0, j, z;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n], c[n];
    printf("Enter element \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                c1++;
            }
        }
    }
    printf("Sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n bubble sort \n%d", c1);
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        c2++;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
            c2++;
        }
        a[j + 1] = temp;
        c2++;
    }
    printf("\n insertion sort \n%d", c2);
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
                c3++;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
            c3++;
        }
    }
    printf("\n selection sort \n%d", c3);
    return 0;
}