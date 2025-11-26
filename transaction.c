#include "transaction.h"
#include<stdio.h>
#include<string.h>

void searchTransaction(Transaction *array, int size) {
    char searchNum[MAX_VEHICLE_NUM_LEN];
    printf("Enter vehicle number to search: ");
    scanf("%s", searchNum);
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i].vehicleNum, searchNum) == 0) {
            printf("VehicleType: %s, EntryTime: %s, TollPaid: %.2f\n",
                array[i].vehicleType,array[i].entryTime,array[i].TollPaid);
        }
    }
}

void summaryReport(Transaction *array, int size) {
    int car = 0, truck = 0, bus = 0, bike = 0;
    float totalToll = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i].vehicleType, "car") == 0) car++;
        else if (strcmp(array[i].vehicleType, "Truck") == 0) truck++;
        else if (strcmp(array[i].vehicleType, "bus") == 0) bus++;
        else if (strcmp(array[i].vehicleType, "bike") == 0) bike++;
        totalToll += array[i].tollPaid;
    }
    printf("\nDaily Summary:\n");
    printf("Cars: %d, Trucks: %d, Buses: %d, Bikes: %d, Total Toll: %.2f\n",
        car, truck, bus, bike, totalToll);
}
