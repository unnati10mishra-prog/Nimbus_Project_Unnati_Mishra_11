#ifndef FILEIO_H
#define FILEIO_H
#include "toll.h"
void saveTransactions(transaction *array, int size);
int loadTransactions(transaction **array, int *capacity);
#endif
