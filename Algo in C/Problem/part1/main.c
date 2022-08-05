#include <stdio.h>
#include <stdlib.h>

    struct car{
        int time;
        int speed;
        };

    int main()
{
    int i;
    struct car arr1[13];

    printf("Enter time and speed values:");
    for(i=0;i<13;i++){

        scanf("%d",&arr1[i].time);
        scanf("%d",&arr1[i].speed);
    }

    return 0;
}
