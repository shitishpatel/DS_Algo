#include <stdio.h>

int main()
{
    int i, j, n, flag, temp, min;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element of an array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("sorted array is\n");
    for (i = 0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}


// Time Complexity
//  Best Case : O(n^2)
//  Worst Case : O(n^2)

// Input : 
// 3
// 23
// 2
// 3
// Output :
// 2
// 3
// 23
