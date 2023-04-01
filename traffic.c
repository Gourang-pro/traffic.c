#include <stdio.h>

int main() {
    int speedLimit = 60;
    int currentSpeed;

    printf("Enter your current speed: ");
    scanf("%d", &currentSpeed);

    if (currentSpeed > speedLimit) {
        printf("You are over the speed limit!\n");
        printf("Please slow down and obey traffic rules.\n");
    } else {
        printf("You are driving within the speed limit.\n");
        printf("Keep up the good work and drive safely.\n");
    }

    return 0;
}
