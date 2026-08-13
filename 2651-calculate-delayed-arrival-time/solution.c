int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int x=arrivalTime+delayedTime;
    return x%24;
}
