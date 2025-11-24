#include "utils.h"
#include<stdio.h>


int safeScanInt(int *out){

    int result = scanf("%d",out);
    while(getchar() != '\n');
    return result ==1;
}