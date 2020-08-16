#include <stdio.h>

int main()
{
    int n, i, count = 0,j,c[100];
    int b[10]={0,1,2,3,4,5,6,7,8,9};
    printf("Enetr the size of array\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   for(j=0;j<10;j++)
   {
       for(i=0;i<n;i++)
       {
           if(a[i]==b[j])
           {
             count++;
           }
       }
       c[j]=count;
       count=0;
   }
  
   for(j=0;j<10;j++)
   {
       printf("frequency of %d is %d \n",j,c[j]);
   }
    return 0;
}