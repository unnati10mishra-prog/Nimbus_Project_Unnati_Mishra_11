#ifndef TOLL_H
#define TOLL_H

#define max_len 10
#define max_veh_num_len 20
typedef struct{
    char vehicle_num[max_veh_num_len];
    char vehicle_type[max_len];
    char e_time[20];
    float toll_paid;
} transaction;
float calculate_toll(const char *type, const char *e_time);
void reg_vehicle(transaction **array, int *size, int *capacity);
void printmenu();
#endif