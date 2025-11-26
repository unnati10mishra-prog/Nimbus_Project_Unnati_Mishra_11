#include "transaction.h"
#include<stdio.h>
#include<string.h>

void searchTransaction(transaction *array, int size) {
    char searchNum[max_veh_num_len];
    printf("Enter vehicle number to search: ");
    scanf("%s", searchNum);
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i].vehicle_num, searchNum) == 0) {
            printf("VehicleType: %s, EntryTime: %s, TollPaid: %.2f\n",
                array[i].vehicle_type,array[i].e_time,array[i].toll_paid);
        }
    }
}

void summaryReport(transaction *array, int size) {
    int car = 0, truck = 0, bus = 0, bike = 0;
    float totalToll = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(array[i].vehicleType, "car") == 0) car++;
        else if (strcmp(array[i].vehicle_type, "Truck") == 0) truck++;
        else if (strcmp(array[i].vehicle_type, "bus") == 0) bus++;
        else if (strcmp(array[i].vehicle_type, "bike") == 0) bike++;
        totalToll += array[i].toll_paid;
    }
    printf("\nDaily Summary:\n");
    printf("Cars: %d, Trucks: %d, Buses: %d, Bikes: %d, Total Toll: %.2f\n",
        car, truck, bus, bike, totalToll);
}
