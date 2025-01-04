/* A program that accepts the distance traveled and the time teaken (in hours and minutes). Convert the time to hours, calculate the average speed, and print it*/
#include <stdio.h>

int main() {
    
    // declaration of variables
    float distance, average_speed, time_c, times_m;
    int times_h;
    
    //ask user for distance
    do {
    printf("Please input distance traveled: ");
    scanf("%f", &distance);
    } while (distance < 0);
    
    //ask user for time took in hours  
    do {
    printf("Please input time to travel (in hours): ");
    scanf("%i", &times_h);
    } while (times_h < 0);
    
    //ask user for the time took in minutes
    do {
    printf("Please input time to travel (in minutes): ");
    scanf("%f", &times_m);
    } while (times_m < 0);
        
    // compiles hours and minutes by converting minutes to hours then adding it
    time_c = times_h + (times_m / 60);
    
    //converts average_speed
    average_speed = distance/time_c;
    
    // print the average speed
    printf("the estimated average speed is: %.2f", average_speed);
     
}
