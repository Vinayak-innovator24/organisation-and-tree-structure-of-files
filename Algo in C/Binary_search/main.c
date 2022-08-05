#include <stdio.h>
#include <malloc.h>

int main()
{
    int i,j,n,mid,data, l, r,flag=0;
    int* arr;

    printf("Enter n: ");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    l=0,
    r=n-1;
    printf("Enter the data : ");
    scanf("%d", &data);

    for (i=0;i<n;i++)
    {
        printf("Enter data %d ", i+1);
        scanf("%d",&arr[i]);
    }

        while(l<r)
        {
            mid=(l+r)/2;

            if(data<arr[mid])
                r=mid-1;
            else if(data>arr[mid])
                l=mid+1;
            else
                printf("The mid element at %d position is %d " ,mid+1,arr[mid]);
                flag=1;
                break;
        }
            if (flag==0)
                printf("Data not found");

    return 0;
}
