#include <stdio.h>
#include <stdlib.h>

    typedef struct car{
        int time;
        int speed;
        }Carr;

    int main()
{
    int i;
    Carr arr1[13];

    printf("Enter time and speed values:");
    for(i=0;i<13;i++){

        scanf("%d",&arr1[i].time);
        scanf("%d",&arr1[i].speed);
    }

    return 0;
}
