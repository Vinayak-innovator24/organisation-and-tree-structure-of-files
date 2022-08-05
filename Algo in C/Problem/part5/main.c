#include <stdio.h>
#include <stdlib.h>

    struct car{
        int time;
        int speed;
        };

    float Simpson 1/3(struct car arr[13]){
            int i;
            float sum=0;

            for(i=0;i<13;i++){
                sum=sum+arr[i].speed;
            }
            float avg_speed=sum/13;

            float h=t->time[1]-t->time[0];
    h=h/60;
    float sum=0;
    for(i=1;i<13;i++){
        sum+=(t->avg_speed[2*i]+t->4*avgspeed[2*i-1]+t->avg_speed[2*i+2]);
    }
    return (sum*h)/3;
}

int main()
{
    int i,j,total_distance;
    struct car arr1[13];

    printf("Enter time and speed values:");
    for(i=0;i<13;i++)
    {

        scanf("%d",&arr1[i].time);
        scanf("%d",&arr1[i].speed);

    }
        total_distance=Simpson 1/3(arr1);
        printf("Total distance travelled is %d",total_distance);
    return 0;
}
