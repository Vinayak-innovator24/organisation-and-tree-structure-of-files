#include <stdio.h>
#include <stdlib.h>

    struct car{
        int time;
        int speed;
        };

    void avg_speed(struct car arr[13]){
            int i;
            float sum=0;

            for(i=0;i<13;i++){
                sum=sum+arr[i].speed;
            }
            float avg_speed=sum/13;
            printf("The average speed is %f",avg_speed);
    }

int main()
{
    int i,j;
    struct car arr1[13];

    printf("Enter time and speed values:");
    for(i=0;i<13;i++){

        scanf("%d",&arr1[i].time);
        scanf("%d",&arr1[i].speed);

    }
        avg_speed(arr1);
    return 0;
}
