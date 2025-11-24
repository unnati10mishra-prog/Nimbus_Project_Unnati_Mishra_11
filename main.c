#include "toll.h"
#include "transaction.h"
#include "fileio.h"
#include "utils.h"

#include<stdio.h>
#include<stdlib.h>

int main(){
    int capacity = 10, size = 0;
    Transaction *array = malloc(capacity*sizeof(Transaction));
    if(!array){
        printf("Initial allocation failed ! \n");
        return 1;
    }
    // Load previous transactions from file 
    size = laodTransactions(&array , &capacity);

    int choice;
    do{
        printMenu();
        if(!safeScanInt(&choice)) continue;
        switch(choice){ 
            case 1:
            registerVehicle(&array , &size , &capacity);
            break;
            case 2:
            searchTransaction(array,size);
            break;
            case 3:
            summaryReport(array,size);
            break;
            case 4:
            saveTransactions(array,size);
            printf("Exiting . Transactions saved !\n");
            break;
            default:
            printf("Invalid choice . Try again\n");

        }
        

    } while(choice !=4);
    free(array);
    return 0 ;
}