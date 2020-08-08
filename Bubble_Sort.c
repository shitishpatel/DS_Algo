#include<stdio.h>

int main()
{
    int i,j,n,flag,temp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
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
