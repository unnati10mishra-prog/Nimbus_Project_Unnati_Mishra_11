#include"toll.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
float calculate_toll(const char *type, const char *e_time){
    float rate=0;
    if(strcmp(type,"car")==0)
    rate=50;
    else if(strcmp(type,"bus")==0)
    rate=80;
    else if(strcmp(type,"truck")==0)
    rate=100;
    else if(strcmp(type,"bike")==0)
    rate=30;

    int hour;
    sscanf(e_time,"%*d-%*d-%*d %d:%*d",&hour);
    if(hour>=22||hour<6)
    rate*=0.8;// off peak discount
    return rate;
}
void reg_vehicle(transaction **array,int *size,int *capacity){
    transaction t;
    printf("Enter the vehicle number:");
    scanf("%s",t.vehicle_num);
    printf("Enter vehicle Type(car/bus/bike/truck):");
    scanf("%s",t.vehicle_type);

    time_t now=time(NULL);
    struct tm *tm_info=localtime(&now);
    strftime(t.e_time,sizeof(t.e_time),"%Y-%m-%d %H:%M,tm_info");
    t.toll_paid=calculate_toll(t.vehicle_type,t.e_time);

    if(*size==*capacity){
        *capacity *=2;
        *array =realloc(*array,*capacity*sizeof(transaction));
        if(!*array){
            printf("Memory allocation failed!\n");
            exit(1);
        }
    }
    (*array)[(*size)++]=t;
    printf("Vehicle registered. Toll:%.2f\n",t.toll_paid);
}
void printmenu(){
    printf("\n--- Toll Management System Menu ---\n");
    printf("1. Register vehicle & entry\n");
    printf("2. Search transaction\n");
    printf("3. Summary report\n");
    printf("4. Exit\n");
    printf("Enter choice:");
}