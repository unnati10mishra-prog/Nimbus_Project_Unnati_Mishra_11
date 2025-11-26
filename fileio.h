#ifndef FILEIO_H
#define FILEIO_H
#include "toll.h"
void saveTransactions(Transaction *array, int size);
int loadTransactions(Transaction **array, int *capacity);
#endif