#include<stdio.h>
int main(){
    float heartrate,temp;

    printf("enter your heart rate:");
    scanf("%f",&heartrate);
    printf("enter your body temperature");
    scanf("%f",&temp);
    if (heartrate>120.0 && temp>39.0){
        printf("critical-immediate attention");
    } else if ("heartrate>=100.0 && heartrate<=120"){
       if (temp>=37.5 && temp<=39.0){
    }printf("urgent");
}else {
    printf("normal-wait in queue");
}
return 0;
}