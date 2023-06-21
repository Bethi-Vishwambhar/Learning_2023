#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void calculateTimeDifference(const struct Time *time1Ptr, const struct Time *time2Ptr, struct Time *differencePtr) {
    int totalSeconds1 = time1Ptr->hours * 3600 + time1Ptr->minutes * 60 + time1Ptr->seconds;
    int totalSeconds2 = time2Ptr->hours * 3600 + time2Ptr->minutes * 60 + time2Ptr->seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    differencePtr->hours = diffSeconds / 3600;
    differencePtr->minutes = (diffSeconds % 3600) / 60;
    differencePtr->seconds = (diffSeconds % 3600) % 60;
}

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    calculateTimeDifference(&time1, &time2, &difference);

    printf("Time difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
