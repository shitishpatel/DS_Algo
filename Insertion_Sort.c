#include<stdio.h>

int main()
{
    int i,j,n,temp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
         while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
     a[j+1]=temp;
    }
    printf("sorted array is\n");
    for(j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
    return 0;
}


// Time Complexity
//  Best Case : O(n)
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
