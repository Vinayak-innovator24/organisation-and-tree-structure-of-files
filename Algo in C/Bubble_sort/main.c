#include <stdio.h>
#include<malloc.h>

int main()
{
    int i,j,flag,n,a;
    int *arr;

    printf("Enter n: ");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);

    for (i=0;i<n-1;i++)
    {
        int flag=0;
        printf("Enter data %d ", i+1);
        scanf("%d",&arr[i]);
    }
    for(j=1;j<n-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            a=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=a;
            flag=1;
        }

        if (flag==0)
        {
            break;
        }
    }
    return 0;
}
