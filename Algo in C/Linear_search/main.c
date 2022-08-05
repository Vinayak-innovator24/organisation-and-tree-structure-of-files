#include <stdio.h>

int main()
{
    int i,n,data,front;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter data:");
    scanf("%d",&data);

    int arr[n];
    front=0;
    for(i=0;i<n;i++)
    {
        printf("Enter %dth element:",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if (data==arr[i])
        {
            front=1;
            break;
        }
    }
        if (front==0)
        {
            printf("Element not found");
        }
        else
        {
            printf("Element found at %dth position",i+1);
        }
    return 0;
}
